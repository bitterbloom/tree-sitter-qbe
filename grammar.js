module.exports = grammar({
    name: 'qbe',

    extras: t => [
        /\s/,
        t.line_comment,
    ],

    conflicts: t => [
        [t.const, t.dataitem],
        [t.const, t.val],
    ],

    rules: {
        source_file: t => rep(t.def),

        line_comment: _ => token(
            seq(
                '#',
                /.*/,
            ),
        ),

        basety: _ => choice(
            // 32, 64
            'w', 'l', // int
            's', 'd', // float
        ),

        extty: t => choice(
            t.basety,
            'b', 'h',
        ),

        number: _ => /([sd]_)?-?\d+(\.\d+)?/,

        ident: _ => /[a-zA-Z0-9_\.]*/,

        global: t => seq(
            '$', t.ident,
        ),

        const: t => choice(
            t.number,
            t.global,
        ),

        dynconst: t => choice(
            t.const,
            seq('thread', t.global),
        ),

        temp: t => seq(
            '%', t.ident,
        ),

        val: t => choice(
            t.dynconst,
            t.global,
            t.temp,
        ),

        linkage: t => choice(
            'export',
            'thread',
            seq('section', t.string),
            seq('section', t.string, t.string),
        ),

        aggregate: t => seq(
            ':', t.ident,
        ),

        subty: t => choice(
            t.extty,
            t.aggregate,
        ),

        typedef: t => seq(
            'type', t.aggregate, '=',
            opt('align', t.number), '{',
            choice(
                separate(seq(t.subty, opt(t.number)), ','),
                rep('{', t.subty, opt(t.number), '}'),
                t.number,
            ),
            '}',
        ),

        string: _ => seq(
            '"',
            rep(token.immediate(/[^"\n]+/)),
            '"',
        ),

        dataitem: t => choice(
            seq(t.global, opt('+', t.number)),
            t.string,
            t.const,
        ),

        datadef: t => seq(
            'data', t.global, '=',
            opt('align', t.number), '{',
                choice(
                    separate(
                        choice(
                            seq(t.extty, rep(t.dataitem)),
                            seq('z', t.number),
                        ),
                        ',',
                    ),
                ),
            '}',
        ),

        subwty: _ => choice(
            'sb', 'ub',
            'sh', 'uh',
        ),

        abity: t => choice(
            t.basety,
            t.subwty,
            t.aggregate,
        ),

        param: t => choice(
            seq(t.abity, t.val),
            seq('env', t.val),
            seq('...'),
        ),

        label: t => seq(
            '@', t.ident,
        ),

        phi: t => seq(
            t.temp, '=',
            t.basety, 'phi',
            t.label, t.val,
            rep(',', t.label, t.val),
        ),

        inst_one_name: _ => choice(
            'neg',
            /load[dsluwhb]{1,2}/,
            /alloc(4|8|16)/,
            /ext[suwhb]{1,2}/,
            'truncd',
            /[sudwl]{1,2}to[suif]{1,2}/,
            'cast',
            'copy',
            'vaarg',
        ),

        inst_one: t => seq(
            t.inst_one_name,
            t.val,
        ),

        inst_two_name: _ => choice(
            'add', 'sub', 'div', 'mul',
            'udiv', 'rem', 'urem',
            'or', 'xor', 'and',
            'sar', 'shr', 'shl',
            /c(eq|ne|[su]?[lg][et]|u?o)[dslw]/,
        ),

        inst_two: t => seq(
            t.inst_two_name,
            t.val, ',', t.val,
        ),

        blit: t => seq(
            'blit',
            t.val, ',', t.val, ',', t.val,
        ),

        store_name: _ => /store[dslwhb]/,

        store: t => seq(
            t.store_name,
            t.val, ',', t.val,
        ),

        vastart: t => seq(
            'vastart',
            t.val,
        ),

        call: t => seq(
            'call', field("name", t.val),
            '(', opt(separate(t.param, ',')), ')',
        ),

        dbgloc: t => seq(
            'dbgloc', t.number,
            opt(',', t.number),
        ),

        inst: t => choice(
            seq(
                t.temp, '=',
                t.abity,
                choice(
                    t.inst_one,
                    t.inst_two,
                    t.call,
                ),
            ),
            t.blit,
            t.store,
            t.vastart,
            t.call,
            t.dbgloc,
        ),

        jump: t => choice(
            seq('jmp', t.label),
            seq('jnz', t.val, ',', t.label, ',', t.label),
            seq('ret', opt(t.val)),
            'hlt',
        ),

        block: t => seq(
            t.label,
            rep(t.phi),
            rep(t.inst),
            opt(t.jump),
        ),

        funcdef: t => seq(
            'function', opt(t.abity), field('name', t.global),
            '(', opt(separate(t.param, ',')), ')', '{',
                rep(t.block),
            '}',
        ),

        def: t => choice(
            seq(
                rep(t.linkage),
                choice(
                    t.typedef,
                    t.datadef,
                    t.funcdef,
                ),
            ),
            t.dbgfile,
        ),

        dbgfile: t => seq(
            'dbgfile', t.string,
        ),
    }
});

function opt(...rule) {
    return optional(seq(...rule));
}

function rep(...rule) {
    return repeat(seq(...rule));
}

function separate(rule, delimeter) {
    return seq(
        rule,
        repeat(seq(delimeter, rule)),
        opt(delimeter),
    );
}

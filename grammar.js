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

        number: _ => /\d+(\.\d+)?/,

        ident: _ => /[a-zA-Z_\.]\w*/,

        global: t => seq(
            '$', t.ident,
        ),

        const: t => choice(
            seq(opt('-'), t.number),
            seq(opt('s_'), t.number),
            seq(opt('d_'), t.number),
            t.global,
        ),

        dynconst: t => choice(
            t.const,
            seq('thread', t.global),
        ),

        val: t => choice(
            t.dynconst,
            t.global,
        ),

        secname: _ => /".*?"/,

        secflags: _ => /".*?"/,

        linkage: t => choice(
            'export',
            'thread',
            seq('section', t.secname),
            seq('section', t.secname, t.secflags),
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

        string: _ => /".*?"/,

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

        temp: t => seq(
            '%', t.ident,
        ),

        param: t => choice(
            seq(t.abity, t.temp),
            seq('env', t.temp),
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

        inst_arg: t => choice(
            t.number,
            t.temp,
        ),

        inst_one_name: _ => choice(
            'neg',
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
            t.inst_arg,
        ),

        inst_two_name: _ => choice(
            'add', 'sub', 'div', 'mul',
            'udiv', 'rem', 'urem',
            'or', 'zor', 'and',
            'sar', 'shr', 'shl',
            /load[dsluwhb]{1,2}/,
            /c(eq|ne|[su][lg][et]|u?o)[dslw]/,
        ),

        inst_two: t => seq(
            t.inst_two_name,
            t.inst_arg, ',', t.inst_arg,
        ),

        inst_three_name: _ => 'blit',

        inst_three: t => seq(
            t.inst_three_name,
            t.inst_arg, ',', t.inst_arg, ',', t.inst_arg,
        ),

        store_name: _ => /store[dslwhb]/,

        store: t => seq(
            t.store_name,
            t.inst_arg, ',', t.inst_arg,
        ),

        vastart: t => seq(
            'vastart', t.inst_arg,
        ),

        call: t => seq(
            'call', field("name", t.val),
            '(', separate(t.param, ','), ')',
        ),

        inst: t => choice(
            seq(
                t.temp, '=',
                t.abity,
                choice(
                    t.inst_one,
                    t.inst_two,
                    t.inst_three,
                    t.call,
                ),
            ),
            t.store,
            t.vastart,
            t.call,
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
            t.jump,
        ),

        funcdef: t => seq(
            'function', opt(t.abity), field('name', t.global),
            '(', separate(t.param, ','), ')', '{',
                rep(t.block),
            '}',
        ),

        def: t => seq(
            rep(t.linkage),
            choice(
                t.datadef,
                t.funcdef,
            ),
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

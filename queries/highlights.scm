
(line_comment) @comment

(number) @number
(string) @string

(basety) @type.builtin
(extty)  @type.builtin
(subwty) @type.builtin
(aggregate) @type

(global) @constant
(temp)   @variable
(label)  @label

"phi" @keyword.operator
(inst_one_name)   @keyword.operator
(inst_two_name)   @keyword.operator
(inst_three_name) @keyword.operator
(store_name) @keyword.operator
"vastart"    @keyword.operator
"call"       @keyword.operator
(call name: (val) @function)
(funcdef name: (global) @function)

"jmp" @repeat
"jnz" @repeat
"ret" @keyword.return
"hlt" @exception

"-" @operator
"=" @operator

"," @punctuation.delimiter

[
"("
")"
"{"
"}"
] @punctuation.bracket

[
"thread"
"export"
"section"
] @type.qualifier

[
"type"
"data"
"z"
"function"
"env"
"align"
"env"
] @keyword


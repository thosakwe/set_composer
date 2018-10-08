grammar Set;

set: '{' ((pair ',')* pair)? '}';
pair: '(' x=Integer ',' y=Integer ')';

Whitespace: [ \n\r\t]+ -> skip;
Integer: [0-9]+;
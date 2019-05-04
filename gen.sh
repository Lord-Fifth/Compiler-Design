flex var.l;
bison -d var.y;
gcc -c lex.yy.c var.tab.c;
gcc -o compiler.out lex.yy.o var.tab.o -ll

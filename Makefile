program:
	flex lexical/lexical.l
	bison -d sintatic/sintatic.y -Wcounterexamples 
	gcc lex.yy.c sintatic.tab.c -o analyse tree.c -Wall -ll

clean:
	rm lex.yy.c
	rm sintatic.tab.c
	rm sintatic.tab.h
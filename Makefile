program:
	flex lexical/lexical.l
	bison -d sintatic/sintatic.y -Wcounterexamples 
	gcc lex.yy.c sintatic.tab.c symbol_table.c -o analyse tree.c -Wall -ll

clean:
	rm lex.yy.c
	rm sintatic.tab.c
	rm sintatic.tab.h


# valgrind -v --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file="logfile.out"
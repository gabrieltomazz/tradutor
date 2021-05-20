program:
	flex lexical/lexical.l
	bison -d sintatic/sintatic.y -Wcounterexamples 
	gcc -g lex.yy.c sintatic.tab.c symbol_table.c -o analyse tree.c tac.c -Wall -ll

clean:
	rm lex.yy.c
	rm sintatic.tab.c
	rm sintatic.tab.h

docker:
	docker cp three_address.tac hungry_ellis:usr/src/trad/src/

# valgrind -v --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file="logfile.out"
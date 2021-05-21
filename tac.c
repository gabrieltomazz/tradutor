#include "tac.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* alocar_memoria(char *s) {
	char *aloc = (char*) realloc(s, 3000 * sizeof(char));
	if (aloc != NULL) {
		s = aloc;
	}else{
		free(s);
		printf("Error\n");
		exit(1);
	}

	return s;
}

char* logical_ops_tac(char* var){

	// GT_OP  ">" , int regis, int r1, int r2
	// LT_OP  "<"          
	// GTE_OP ">=" 
	// LTE_OP "<=" 
	// NEQ_OP "!=" 
	// EQUAL_OP "=="
	// a < b equivale a  b >= a
	// a > b equivale b <= a
	if(strcmp(var, "GT_OP") == 0){
	  return "slt $%d, $%d, $%d // var %s > var %s \n";
	}else if(strcmp(var, "LT_OP") == 0){
		return "slt $%d, $%d, $%d // var %s < var %s \n";
	}else if(strcmp(var, "GTE_OP") == 0){
		return "sleq $%d, $%d, $%d // var %s >= var %s \n";
	}else if(strcmp(var, "LTE_OP") == 0){
		return "sleq $%d, $%d, $%d // var %s <= var %s \n";
	}else if(strcmp(var, "NEQ_OP") == 0){
		return "seq $%d, $%d, $%d // var %s != var %s \n";	
	}else if(strcmp(var, "EQUAL_OP") == 0){
		return "seq $%d, $%d, $%d // var %s == var %s \n";
	}

	return "";
}

char* func_write(char* tac){

	tac = alocar_memoria(tac);
	sprintf(tac + strlen(tac), "write_str: \n");
	
	tac = alocar_memoria(tac);
	sprintf(tac + strlen(tac), "mov $0, 0 \n");

	tac = alocar_memoria(tac);
	sprintf(tac + strlen(tac), "mov $1, #0 \n");

	tac = alocar_memoria(tac);
	sprintf(tac + strlen(tac), "L1: \n");

	tac = alocar_memoria(tac);
	sprintf(tac + strlen(tac), "mov $2, $1[$0] \n");

	tac = alocar_memoria(tac);
	sprintf(tac + strlen(tac), "seq $3, $2, '\\0' \n");
	
	tac = alocar_memoria(tac);
	sprintf(tac + strlen(tac), "brnz L2, $3 \n");

	tac = alocar_memoria(tac);
	sprintf(tac + strlen(tac), "print $2 \n");

	tac = alocar_memoria(tac);
	sprintf(tac + strlen(tac), "add $0, $0, 1 \n");

	tac = alocar_memoria(tac);
	sprintf(tac + strlen(tac), "jump L1 \n");
	
	tac = alocar_memoria(tac);
	sprintf(tac + strlen(tac), "L2:\n");

	tac = alocar_memoria(tac);
	sprintf(tac + strlen(tac), "return 0 \n \n");

	return tac;
	
}

char* func_writeln(char* tac){

	tac = alocar_memoria(tac);
	sprintf(tac + strlen(tac), "writeln_str: \n");
	
	tac = alocar_memoria(tac);
	sprintf(tac + strlen(tac), "mov $0, 0 \n");

	tac = alocar_memoria(tac);
	sprintf(tac + strlen(tac), "mov $1, #0 \n");

	tac = alocar_memoria(tac);
	sprintf(tac + strlen(tac), "L3: \n");

	tac = alocar_memoria(tac);
	sprintf(tac + strlen(tac), "mov $2, $1[$0] \n");

	tac = alocar_memoria(tac);
	sprintf(tac + strlen(tac), "seq $3, $2, '\\0' \n");
	
	tac = alocar_memoria(tac);
	sprintf(tac + strlen(tac), "brnz L4, $3 \n");

	tac = alocar_memoria(tac);
	sprintf(tac + strlen(tac), "print $2 \n");

	tac = alocar_memoria(tac);
	sprintf(tac + strlen(tac), "add $0, $0, 1 \n");

	tac = alocar_memoria(tac);
	sprintf(tac + strlen(tac), "jump L3 \n");
	
	tac = alocar_memoria(tac);
	sprintf(tac + strlen(tac), "L4:\n");
 
	tac = alocar_memoria(tac);
	sprintf(tac + strlen(tac), "println \n ");

	tac = alocar_memoria(tac);
	sprintf(tac + strlen(tac), "return 0 \n \n");

	return tac;
	
}
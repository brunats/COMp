#include <stdio.h>
#include "compilador.h"
extern FILE *yyin;

int main(int argc, char *argv[]){
	if (argc == 2)
		yyin = fopen(argv[1],"r+");
	
	if(!yyin){
		printf("Arquivo de teste inv�lido\n");
		return 0;
	}		
	//printf("Digite uma express�o:");
	yyparse();
	imprimeVetorInstrucao();
	return 0;
}


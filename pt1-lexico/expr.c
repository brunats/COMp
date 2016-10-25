#include <stdio.h>

extern FILE *yyin;
extern int lin;

int main(int argc, char *argv[]){
	lin=0;
	if (argc == 2)
		yyin = fopen(argv[1],"r+");
	
	if(!yyin){
		printf("Arquivo de teste inv�lido\n");
		return 0;
	}		
	//printf("Digite uma express�o:");
	yyparse();
	return 0;
}


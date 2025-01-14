#include <stdio.h>

int open_file(FILE **file){
	//abrindo arquivo
	*file = fopen("lista.txt", "r");
	
	//tratando erros de abertura
	if(file == NULL)
		printf("Erro ao abrir arquivo!\n");
	
	else
		printf("Arquivo aberto com sucesso!\n");
	
	return 0;
}

//fechando arquivo
int close_file(FILE *file){
	if(fclose(file) != 0)
		printf("Erro!\n");
	
	else
		printf("Arquivo fechado com sucesso!\n");
	
	return 0;
}

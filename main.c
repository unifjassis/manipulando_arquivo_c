#include <stdio.h>
#include "head.h"

int main(void) {
	//ponteiro do arquivo
	FILE *file;
	
	//abertura do arquivo
	open_file(&file);
	
	//struct caracteristicas de cada pessoa
	struct pessoa{
	char nome[200];
	int idade;
	float altura;
	};
	
	//vetor de pessoas inicializado vazio
	struct pessoa *pessoas;
	
	//nessa etapa preciso passar as informacoes do arquivo para a struct
	
	//fechamento do arquivo
	close_file(file);
	return 0;
}

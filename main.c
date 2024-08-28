#include <stdio.h>

int teste();

int main(void) {
  //ponteiro do arquivo
  FILE *file;

  //abrindo arquivo
  file = fopen("lista.txt", "r");
  
  //tratando erros de abertura
  if(file == NULL)
    printf("Erro ao abrir arquivo!\n");

  else
    printf("Arquivo aberto com sucesso!\n");

  //struct caracteristicas de cada pessoa
  struct pessoa{
  char nome[200];
  int idade;
  float altura;
  };

  //vetor de pessoas inicializado vazio
  struct pessoa *pessoas;

  //nessa etapa preciso passar as informações do arquivo para o vetor
  int a = teste();
  
  //fechando arquivo
  if (fclose(file) == 0)
    printf("Arquivo fechado com sucesso!\n");
  return 0;
}
#include <stdio.h>

struct teste1{
  int a;
  char *b;
};

int teste(){
  struct teste1 a1;
  a1.a = 10;
  a1.b = "teste";

  printf("a1 valores: %d, %s\n", a1.a, a1.b);
  return 0;
}
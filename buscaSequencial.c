#include <stdio.h>
#define QDEALU 75


typedef struct _alu {
  int RA;
  float A1;
  float A2;
  float media;
} aluno;

int buscaSequencial(aluno *vetalu, int n, int busca) {
  int i;
  for (i = 0; i < n; i++) {
    if(vetalu[i].RA == busca)
      return i;
  }
  return -1; //ra nao encontrado
}

int main () {
  int i, RABusca, ret;
  aluno vetalu[QDEALU];

  for(i=0; i<QDEALU; i++) {
    scanf("%d %f %f", &vetalu[i].RA, &vetalu[i].A1, &vetalu[i].A2);
    vetalu[i].media = vetalu[i].A1 + 2*vetalu[i].A2 /3;
  }
  printf("Informe RA para pesquisar: ");
  scanf("%d", &RABusca);

  ret = buscaSequencial(vetalu, QDEALU, RABusca);

  if(ret== -1)
    printf("RA não existente");
  else
    printf("RA: %d  Nota A1: %.1f  NOTA A2: %.1f  MEDIA:%.1f\n", vetalu[ret].RA, vetalu[ret].A1, vetalu[ret].A2, vetalu[ret].media);

    return 0;
}

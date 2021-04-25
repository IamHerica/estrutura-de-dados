#include <stdio.h>
#define QDEALU 75


typedef struct _alu {
  int RA;
  float A1;
  float A2;
  float media;
} aluno;

int buscaBinaria(aluno *vetalu, int inicio, int fim, int busca) {
  int i, meio;

  meio = (inicio+fim)/2;

  if(vetalu[meio].RA == busca)
    return meio;

   if (inicio >= fim) 
    return -1;

   if(busca < vetalu[meio].RA)
    buscaBinaria(vetalu, inicio, meio-1, busca);

   if (busca > vetalu[meio].RA)
    buscaBinaria(vetalu, meio+1, fim, busca);

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

  ret = buscaBinaria(vetalu, 0, QDEALU-1, RABusca);

  if(ret== -1)
    printf("RA não existente");
  else
    printf("RA: %d  Nota A1: %.1f  NOTA A2: %.1f  MEDIA:%.1f\n", vetalu[ret].RA, vetalu[ret].A1, vetalu[ret].A2, vetalu[ret].media);

    return 0;
}

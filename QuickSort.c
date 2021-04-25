#include <stdio.h>
#define TAMANHO 10

void quickSort(int *vetor, int esq, int dir) {
  int i, j;
  int pivo, aux;

  i = esq;
  j = dir;
  pivo = vetor[(esq+dir)/2]; //calculo o indice do elemento, e usa ele como pivo

  while (i <= j) {
    while(vetor[i] < pivo && i <  dir)
      i++;

    while (vetor[j] > pivo && j > esq) 
      j--;

    if (i <= j) {
      aux = vetor[i];
      vetor[i] = vetor[j];
      vetor[j] = aux;
      i++;
      j--;
    }
  }

  if (j > esq) 
    quickSort(vetor, esq, j);

  if (i < dir)
    quickSort(vetor, i, dir);

}
  



void imprimeVetor(int *vetor) { // ou int vetor[TAMANHO]; int vetor[]
  int ind;

  for(ind = 0; ind < TAMANHO; ind++)
    printf(" %d", vetor[ind]);

  printf("\n\n");
}

int main () {
  int vetor[TAMANHO] = {75, 80, 72, 33, 45, 55, 67, 28, 23, 18};

  printf("Vetor original.....:");
  imprimeVetor(vetor); //Chamando a função, passando o vetor

  quickSort(vetor, 0, TAMANHO-1); //Chamando a função, passando o 0 do elemento da esquerda e o ultimo argumento

  printf("Vetor ordenado.....:");
  imprimeVetor(vetor); //Chamando a função, passando o vetor
}

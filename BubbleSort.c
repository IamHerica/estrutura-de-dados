#include <stdio.h>

void troca(int *xp, int *yp) // funcao chamada no selectionSort, para trocar o menor valor para a primeira posicao percorrida 
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp; 
}
void selectionSort(int *vetor, int cont) 
{ 
    int i, j, menor;
  
    for (i = 0; i < cont-1; i++) {
        menor = i;
        for (j = i+1; j < cont; j++) {
         if (vetor[j] < vetor[menor]){
            menor = j;
          } troca(&vetor[menor], &vetor[i]);  
        }
         
    }
}
int main () {

  int vetor[10];
  int cont;

  for (cont = 0; cont <10; cont++) {
    scanf("%i", &vetor[cont]);
  }

  selectionSort (vetor, cont);

  for (cont = 0; cont <10; cont++) {
    printf("Valor na posicao [%d]: %d \n", cont, vetor[cont]);
  }

  return 0;
}

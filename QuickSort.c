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

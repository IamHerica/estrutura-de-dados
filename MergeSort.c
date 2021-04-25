// Merge (conquista)
void merge(int *vetor, int qtddelementos) {
  int i, j, k, meio;
  int vetorAux[qtddelementos];

  meio = qtddelementos/2;

  i = 0;
  j = meio;
  k = 0;

  while (i < meio && j < qtddelementos) { //montado o vetor auxiliar
    if (vetor[i] <= vetor[j]) {
      vetorAux[k] = vetor[i]; //pega o elemento do i, e move para o k
      k++;
      i++;
    } else {
        vetorAux[k] = vetor[j];
        k++;
        j++;
    }
  }
  if (i == meio) { //caso sobrar elementos do lado direito
    while (j < qtddelementos) {
      vetorAux[k] = vetor[j];
      k++;
      j++;
      } 
    } else { //caso sobrar elementos do lado esquerdo
      while (i < meio ) {
        vetorAux[k] = vetor[i];
        k++;
        i++;
      }
    }
  

  for (i = 0; i <qtddelementos; i++) { //copiando os elementos do vetor auxiliar para o vetor original
    vetor[i] = vetorAux[i];
  } 
}



//Merge sort (divisão)
void mergeSort(int *vetor, int qtdelementos) { //qtdelementos = TAMANHO
  int meio;

  if (qtdelementos > 1) {
    meio = qtdelementos/2;

    //dividindo todo o vetor
    mergeSort(vetor, meio); // rescursividade 
    mergeSort(&vetor[meio], qtdelementos-meio); //recursividade, passando o endereço do elemento, lá do meio do vetor

    merge(vetor, qtdelementos); //ordenação dos elementos
  }

} 


void imprimeVetor(int *vetor) { // ou int vetor[TAMANHO]; int vetor[]
  int ind;

  for(ind = 0; ind < TAMANHO; ind++)
    printf(" %d", vetor[ind]);

  printf("\n\n");
}


void shellSort(int *vetor, int N){
    int k ,i ,j, aux;


    for(k = 5; k > 0; k-=2){
        for(i=k; i < N; i++){ 
            aux = vetor[i];
            for(j=i-k; j >= 0 && vetor[j] > aux; j-=k){
                vetor[j+k] = vetor[j];
            }
            vetor[j+k] = aux;
        }
    }
}

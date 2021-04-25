void InsertSort(int vetor[], int cont)
{
   int i, fim, j;
 
   for (i = 1; i < cont; i++) {
       fim = vetor[i];
       j = i - 1; //corre do inicio até o fim e do fim até o inicio
    
       while (j >= 0 && vetor[j] > fim) {
           vetor[j + 1] = vetor[j];//pega o valor de j(posicao de memoria) e salva na posicao de j+1, caso entre na condição
           j = j - 1; // volta a posicao anterior
       }
       vetor[j + 1] = fim; // indo para proxima posicao
   }
}

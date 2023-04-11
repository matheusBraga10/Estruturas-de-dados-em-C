/*ex.09*/
#include <stdio.h>
#include <string.h>

void vetorOrdem(int vetor[ ], int tamanho)
{
    int aux;
    for (int i = 0; i < tamanho; i++)
    {
        for(int j = 0; j < tamanho; j++)
        
        if (vetor[j] > vetor[i])
        {
            aux = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = aux;
        }
    }
}

int main(){
    int vet[] = {3, 5, 7, 4, 1, 9, 8, 6, 2};
    int n = sizeof(vet) / sizeof(int);
    vetorOrdem(vet, n);
    for (int i = 0; i < n; i++){
        printf("%d ", vet[i]);
    }
    return 0;
}
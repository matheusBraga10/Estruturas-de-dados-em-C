/*ex.05*/
#include <stdio.h>
#include <string.h>

void vetorSoma(int vetor[ ], int a[ ], int b[ ], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
        vetor[i] = a[i] + b[i];
}

int main()
{
    int j, tam;
    int vet1[tam], vet2[tam], vet3[tam];
    
    printf("Informe o tamanho dos vetores: ");
    scanf("%d", &tam);
    
    printf("Informe os valores dos vetores separados por espaço : ");
    for(int i = 0; i < tam; i++)
        scanf("%d%d", &vet1[i], &vet2[i]);
    
    vetorSoma(vet1, vet2, vet3, tam);
    
    for (int i = 0; i < tam; i++)
        printf("%d\n", vet3[i]);
    
    return 0;
}

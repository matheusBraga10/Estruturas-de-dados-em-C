#include<stdio.h>

int main(void)
{
    //Declarando e atribuindo valores ao vetor
    int i, vetor[20];

    //Imprimindo os valores do vetor
    for (i = 0; i <= 19; i++)
    {
        //Inicializando o vetor com zeros
        vetor[i] = 0;
        printf("Vetor [%d] = %d\n", i, vetor[i]);
    }
    return 0;
}
/*Exercício: 
Criar um vetor denominado "A" com 10 posições do tipo int, preencher o vetor recebendo dados via teclado e multiplicar o conteúdo de cada elemento do vetor "A" por 10 armazenando o resultado desta multiplicação em outro vetor denominado "B".*/

#include<stdio.h>

int main(void)
{
    int i, A[10] ,B[10];

    printf("Digite de 1 até 10 os valores do 1o vetor: \n");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    for (i = 0; i < 10; i ++)
    {
        A[i] = 0;
        printf("\nDigite o valor inicial do %do vetor: ", (i + 1));
        scanf("%d", &A[i]);
        B[i] = 10 * A[i];
        printf("O valor final do %do vetor é: %d\n", (i + 1), B[i]); 
    }
    return 0;
}
#include<stdio.h>
int main (void)
{
    int a, b, soma;

    printf("Digite um numero inteiro: ");
    scanf("%d", &a);

    printf("Digite um numero inteiro: ");
    scanf("%d", &b);

    soma = a + b;

    printf("O valor da soma = %d \n", soma);

    if(soma > 10)
    {
        printf("O valor da soma eh maior que 10 \n");
    }
    else
    {
        printf("O valor da soma é menor que 10 \n");
    }
    return (0);
}
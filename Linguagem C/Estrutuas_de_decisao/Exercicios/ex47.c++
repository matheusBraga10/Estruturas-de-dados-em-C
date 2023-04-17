/*

Crie um programa que mostre na tela todos os números pares que estão no intervalo entre 1 e 50.

*/

#include<stdio.h>

int main()
{
    int i, pnumero, mnumero, resto;


    printf("Digite o menor numero: ");
    scanf("%d", &pnumero);

    printf("Digite o maior numero: ");
    scanf("%d", &mnumero);

    printf("Os numeros pares entre %d e %d são: \n", pnumero, mnumero);

    for(i = pnumero; i <= mnumero; i++)
    {
        resto = i % 2;
        if(resto == 0)
        {
            printf("\n%d", i);
        }
    }
    printf("\nFIM\n");
}
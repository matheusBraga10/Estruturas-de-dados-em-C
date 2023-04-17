/*

Faça um programa que calcule a soma entre todos os números ímpares que são múltiplos de três e que se encontram no intervalo de 1 a 500.

*/

#include<stdio.h>

int main()
{
    int soma, a, b;

    printf("entre com o menor valor: ");
    scanf("%d", &a);
    
    printf("entre com o maior valor: ");
    scanf("%d", &b);
    
    printf("A soma de todos os numeros impares entre %d e %d é: ", a, b);

    for(int i = 0; i < b - 1; i++)
    {
        soma = i % 2;
        if (soma != 0)
        {
            soma += soma + i;
            printf("%d\n", soma);
        }
        
    }
    printf("%d\n", soma);

    return 0;
}
/******************************************************************************

Escreva um programa que leia dois numeros inteiros e compare-os, mostrando na 
tela uma mensagem:

- O primeiro valor é maior
- O segundo valor é maior
- Não existe valor maior, os dois são iguais

*******************************************************************************/

#include <stdio.h>

int main()
{
    int primeiroValor, segundoValor;
    
    
    printf("Entre com um valor inteiro: ");
    scanf("%d", &primeiroValor);
    
    printf("Entre com outro valor inteiro: ");
    scanf("%d", &segundoValor);
    
    if(primeiroValor > segundoValor)
        printf("O primeiro valor é maior (%d > %d), ", primeiroValor, segundoValor);
    
    else if(primeiroValor < segundoValor)
        printf("O segundo valor é maior (%d < %d), ", primeiroValor, segundoValor);
    
    else
        printf("Não existe valor maior, os dois são iguais (%d = %d), ", primeiroValor, segundoValor);
    
        
    
    return 0;
}

/******************************************************************************

Escreva um programa que leia um número inteiro qualquer e peça para o usuário 
escolher qual será a base de conversão:

-1 Binário
-2 Octal
-3 Hexadecimal

*******************************************************************************/

#include <stdio.h>

int binario(int inteiro, int resto)
{
    for(int i = 0; i < inteiro; i++)
        resto[i] = inteiro % 2;
}

int main()
{
    int opcao, decimal, binario, octal, hexadecimal;
    
    
    printf("Entre com um valor inteiro: ");
    scanf("%d", &decimal);
    
    printf("Escolha:\n\n: -1 Binário\n-2 Octal\n-3 Hexadecimal\nPara converter: ");
    scanf("%d", &opcao);
    
    if(opcao == 1)
    {
        binario = ;
        printf("Decimal = %d\nBinário = %d", decimal, binario);
    }
    else if(opcao == 2)
    {
        octal = ;
        printf("Decimal = %d\nOctal = %d", decimal, octal);
    }
    else if(opcao == 3)
    {
        hexadecimal = ;
        printf("Decimal = %d\nHéxadecimal = %d", decimal, hexadecimal);
    }
    else
        printf("Opção não válida, digite número de 1 a 3.");
        
    
    return 0;
}

/******************************************************************************

Escreva um programa que leia um número inteiro qualquer e peça para o usuário 
escolher qual será a base de conversão:

-1 Binário
-2 Octal
-3 Hexadecimal

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int decimal_binario(int decimal)
{
    int resto, binario = 0, i = 1;

    while (decimal != 0)
    {
    resto = decimal % 2;
    decimal = decimal / 2;
    binario = binario + (resto * i);
    i = i * 10;
    }
    return binario;
}
int decimal_octal(int decimal)
{
    int resto, octal = 0, i = 1;

    while (decimal != 0)
    {
    resto = decimal % 8;
    decimal = decimal / 8;
    octal = octal + (resto * i);
    i = i * 10;
    }
    return octal;
}
int decimal_hexadecimal(int decimal)
{
    int resto, hexadecimal = 0, i = 1;

    while (decimal != 0)
    {
    resto = decimal % 16;
    decimal = decimal / 16;
    hexadecimal = hexadecimal + (resto * i);
    i = i * 10;
    }
    return hexadecimal;
}


int main()
{
    int opcao, dec, bin, oct, hexa;
    
    do
    {
        printf("Entre com um valor inteiro: ");
        scanf("%d", &dec);

        printf("Informe a base numerica desejada:\n\n2 Binário\n8 Octal\n16 Hexadecimal\nPara converter: ");
        scanf("%d", &opcao);

        if(opcao == 2)
        {
            bin = decimal_binario(dec);
            printf("\n\nDecimal = %d\nBinário = %d", dec, bin);

        printf("\n");
        }
        else if(opcao == 8)
        {
            oct = decimal_octal(dec);
            printf("\n\nDecimal = %d\nOctal = %d", dec, oct);

        printf("\n");
        }
        else if(opcao == 16)
        {
            hexa = decimal_hexadecimal(dec);
            printf("\n\nDecimal = %d\nHexadecimal = %d", dec, hexa);

        printf("\n");
        }    
        else
            printf("\nO valor da base declarada não corresponde às bases programadas.\nFavor entrar com uma das 3 bases programadas.\n\n");
    } 
    while (opcao != 2 && opcao != 8 && opcao != 16);
        
    return 0;
}

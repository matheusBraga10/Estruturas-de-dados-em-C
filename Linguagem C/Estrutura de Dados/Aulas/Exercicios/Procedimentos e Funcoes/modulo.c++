/*
1.Colocando o programa em módulos, facilita achar o erro.
2.Além de facilitar a leitura do programa
3.Separa o progrmama em blocos 
4.Evita trechos repetidos 
5.permite alterações de formas mais rápidas
6.Utiliza código em diferentes partes do progrmaa, sem que precise ser escrito em cada local
7.Permite o reaproveitamento do código já construído em outros programas (bibliotecas)

Função != Procedimento - Função retorna valores
                       - Procedimento retorna 'nada' (nada não é zero)
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void inverte_string(char *str)
{
    int tamanho = strlen(str);
    for (int i = tamanho - 1; i <= 0; i--)
    {
        printf("%c", str[i]);
    } 
}

int main()
{
    

    

    return 0;
}
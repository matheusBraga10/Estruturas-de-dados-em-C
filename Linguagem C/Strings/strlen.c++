#include<stdio.h>
#include<string.h> // Necessário para strlen

int main(void)
{
    char str[ ] = "Curso de programacao em C++";
    int tamanho;
    // "strlen" calcula o tamanho de um string e retorna o tamanho em inteiro

    tamanho = strlen(str);

    printf("O tamanho da string '%s' vale: %d\n", str, tamanho);


    return 0;
}
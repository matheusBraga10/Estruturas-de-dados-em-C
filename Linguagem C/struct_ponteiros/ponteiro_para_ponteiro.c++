#include<stdio.h>

int main(void)
{
    //'valor' é a variavel que será apontada pelo ponteiro
    //Declaração de variável ponteiro
    int x, *ptrx, **pptrx;

    x = 0;

    //Atribuindo o endereço da variável 'valor' ao ponteiro '*ptr'

    printf("Utilizando ponteiros\n");
    printf("Conteudo da variável x: %d\n", x);
    printf("*************************************\n");
    ptrx = &x;
    pptrx = &ptrx;

    *ptrx += 10;
    printf("Conteudo da variável x: %d\n", x);
    printf("Enrdereço da variável x: %x\n", &x);
    printf("Endereço apontado por ptrx: %x\n", ptrx);
    printf("Valor da variável x que está seno apontada por prtx: %d\n", *ptrx);
    printf("*************************************\n");

    **pptrx += 10;
    printf("Endereço de memoria da variavel ptrx: %x\n", &pptrx);
    printf("valor de pptrx: %d\n", **pptrx);

    
    return 0;
}
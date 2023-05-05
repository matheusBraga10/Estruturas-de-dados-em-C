//Ponteiro de ponteiro
//Muito utilizado em locações dinamicas de matrizes

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x, *ponteiro, **ponteiro2x;

    //inicializando a variavel com zero
    x = 0;
    printf("\nValor de x = %d", x);
    printf("\nEnredeço de x = %x\n", &x);

    //Atribuindo os endereços para os ponteiros
    ponteiro = &x; //ponteiro aponta para x
    ponteiro2x = &ponteiro; //ponteiro2x aponta para ponteiro

    printf("\nValor de x = %d", x);
    printf("\nEndereço apontado por ponteiro = %x", ponteiro);
    printf("\nValor da variavel x que esta sendo apontada por ponteiro = %x", *ponteiro);
    printf("\nEndereço de memoria da variavel ponteiro = %x\n", &ponteiro);

    printf("\nEndereço apontado por ponteiro2x = %x", ponteiro2x);
    printf("\nEndereço de memoria da variavel ponteiro2x = %x", &ponteiro2x);
    printf("\nValor da variavel ponteiro que esta sendo apontada por ponteiro2x = %x", *ponteiro2x);
    printf("\nValor da variavel x que esta sendo apontada por ponteiro2x = %x\n\n", **ponteiro2x);

    return 0;
}
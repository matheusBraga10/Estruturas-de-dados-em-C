#include<stdio.h>

int main()
{
    // "valor" é a variável que será apontada pelo ponteiro
    int valor = 42;

    // declaração de variável ponteiro
    int *ponteiro;

    // atribuindo o endereço da variável valor ao ponteiro
    ponteiro = &valor;

    printf("Utilizando ponteiros\n\n");
    printf("Conteúdo da variável valor: %d\n", valor);
    printf("Endereço da variável valor: %x\n", &valor);
    printf("Conteúdo da variável ponteiro: %x\n", ponteiro);

    return 0;
}

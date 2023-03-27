#include<stdio.h>

int main(void)
{
    //'valor' é a variavel que será apontada pelo ponteiro
    int valor = 27;

    //Declaração de variável ponteiro
    int *ptr;

    //Atribuindo o endereço da variável 'valor' ao ponteiro '*ptr'
    ptr = &valor;

    printf("Utilizando ponteiros\n\n");
    printf("Conteudo da variável valor: %d\n", valor);
    printf("Enrdereço da variável valor: %x\n", &valor);
    printf("Conteúdo da variável ponteiro ptr: %x\n", ptr);

    
    return 0;
}
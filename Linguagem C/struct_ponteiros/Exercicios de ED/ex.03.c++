/*
Crie uma struct "Livro" com os campos "título", "autor", "ano de publicação" e "editora". Em seguida, declare um ponteiro para essa struct e aloque espaço na memória para ele. Preencha as informações do livro usando o ponteiro e imprima as informações na tela.
*/

#include<stdio.h>

int main(void)
{
    struct livro
    {
        char titulo[50];
        char autor[50];
        int ano;
        char editora[50];
    };
    struct livro nlivro;

    
    return 0;
}
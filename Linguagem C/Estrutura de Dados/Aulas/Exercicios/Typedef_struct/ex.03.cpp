/*
Crie uma struct "Livro" com os campos "título", "autor", "ano de publicação" e
"editora". Em seguida, declare um ponteiro para essa struct e aloque espaço na
memória para ele. Preencha as informações do livro usando o ponteiro e imprima as
informações na tela.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    struct livro
    {
        char titulo[50];
        char autor[50];
        int ano;
        char editora[50];
    };
    struct livro *nlivro;
    
    nlivro = (struct livro*) malloc(sizeof(struct livro));
    
    strcpy(nlivro->titulo,"Sandman");
    strcpy(nlivro->autor,"Neil Gaiman");
    nlivro->ano = 2021;
    strcpy(nlivro->editora,"Panini");
    
    printf("Título: %s\n", nlivro->titulo);
    printf("Autor: %s\n", nlivro->autor);
    printf("Ano de publicação: %d\n", nlivro->ano);
    printf("Editora: %s\n", nlivro->editora);
    
    return 0;
}
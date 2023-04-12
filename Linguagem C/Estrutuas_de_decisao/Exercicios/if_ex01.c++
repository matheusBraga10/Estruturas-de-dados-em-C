#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char nome[50];

    printf("Qual é o seu nome? ");
    scanf("%s", &nome);
/*
A função strcmp() pode retornar 3 possiveis valores inteiros.
    "0" As strings são iguais
    "1" A segunda string ocorre primeiro que a primeira
    "-1"A segunda string ocorre depois que a primeira 
*/
    if (strcmp(nome,"Matheus") == 0)
    {
        printf("Seu nome é muito bonito\n");
    }
    else if (strcmp(nome,"João") == 0 || (strcmp(nome,"Maria") == 0))
    {
        printf("Seu nome é muito comum\n");
    }
    else
    {
        printf("Gostei do seu nome\n");
    }
    printf("Tenha um bom dia, %s\n", nome);
    
    return 0;
}
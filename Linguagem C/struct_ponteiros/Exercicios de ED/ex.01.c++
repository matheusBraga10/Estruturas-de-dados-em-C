/*
Crie uma struct "Pessoa" com os campos "nome", "idade" e "altura". Em seguida, declare duas variáveis desse tipo e preencha-as com dados diferentes. Imprima as informações na tela. Você deverá exibir seu nome e mais um outro aleatório.
*/

#include<stdio.h>
#include<string.h>

int main(void)
{
    struct pessoa
    {
        char nome[40];
        int idade ;
        float altura ;
    };

    pessoa p1;
    strcpy(p1.nome, "Matheus");
    p1.idade = 33;
    p1.altura = 1.74;

    pessoa p2;
    strcpy(p2.nome, "Ana");
    p2.idade = 34;
    p2.altura = 1.71;

    printf("********** CADASTRO  **********\n\n");
    printf("O nome do aluno é: %s\n", p1.nome);
    printf("A idade do aluno é: %d anos\n", p1.idade);
    printf("O nome do aluno é: %.2f metros\n\n", p1.altura);
    
    printf("-------------------------------\n\n");
    
    printf("O nome do aluno é: %s\n", p2.nome);
    printf("A idade do aluno é: %d anos\n", p2.idade);
    printf("O nome do aluno é: %.2f metros\n", p2.altura);

    return 0;
}

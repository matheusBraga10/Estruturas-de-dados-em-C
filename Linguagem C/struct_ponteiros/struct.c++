#include<stdio.h>

int main(void)
{
    /*
    conceito de 'struct':
    
    Utiliza-se uma 'struct' para armazenar diversos dados, relativos a uma unica coisa
    struct <identificador>
    {
        <listagem dos tipos e membros>;
    }
    */

    struct ficha_aluno
    {
        char nome[40];
        int numero;
        float nota;
    };
    struct ficha_aluno aluno;
    
    printf("\n---------- Cadastro de aluno ----------\n\n");
    printf("Entre com o nome do aluno: ");
    fflush(stdin);
    fgets(aluno.nome, 40, stdin);

    printf("Entre com o numero de matricula do aluno: ");
    scanf("%d", &aluno.numero);

    printf("Entre com a nota do aluno: ");
    scanf("%f", &aluno.nota);
    
    printf("\n---------- Lendo os dados da struct ----------\n\n");
    printf("Nome: %s", aluno.nome);
    printf("Numero de matricula: %d\n", aluno.numero);
    printf("Nota: %.2f\n", aluno.nota);
    return 0;
    }
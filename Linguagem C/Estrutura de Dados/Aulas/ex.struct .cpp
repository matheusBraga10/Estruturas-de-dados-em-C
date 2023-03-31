// Programa ficha do Aluno
// Declaração de Biblioteca
#include <string.h>
#include <stdlib.h>
 //funções de I/O nos dispositivos stdin, stdout e files
#include <stdio.h>
//#include <conio.h>//funções de manipulação de caracteres na tela

int main()
{
/*Para trabalhar de forma homogênia (ou seja, somente 1 aluno), 
segue abaixo o código *em comentário* */
    //int matricula;
    //char nome[50];
    //float nota;
    
    //float vnotas[20]; //vetor de 20 posições
    //float mnotas[10][2]; //matriz de 10 linhas e 2 colunas
    
    // declaração da struct
    //struct <identificador>
    //{
    //  <listagem dos tipos e membros>;
    //};

/*Para trabalhar de forma Heterogênia (ou seja, mais alunos e matrículas)
devemos trabalhar da forma listada abaixo, com listas e/ou matrizes em struct*/

    struct ficha_aluno
    {
        int matricula;
        char nome[50];
        char diciplina[30];
        float nota;
    };
    
    //declaração da variavel aluno do tipo struct ficha_aluno
    struct ficha_aluno aluno;
    
    //função printf - impressão em tela
    //função - scanf - leitura de dados do teclado
    
    printf("\nFicha do aluno\n");
    
    printf("Matricula do aluno: ");
    scanf("%d", &aluno.matricula);
    
    printf("Nome do aluno: ");
    fgets(aluno.nome, 50, stdin);
    
    printf("Diciplina do aluno: ");
    fgets(aluno.diciplina, 30, stdin);
    
    printf("Nota do aluno: ");
    scanf("%f", &aluno.nota);
    
    printf("\nFicha do aluno\n");
    
    printf("Matricula: %d\n", aluno.matricula);
    printf("Nome: %s\n", aluno.nome);
    printf("Diciplina: %s\n", aluno.diciplina);
    printf("Nota: %.2f\n", aluno.nota);
    
    return 0;

    
}
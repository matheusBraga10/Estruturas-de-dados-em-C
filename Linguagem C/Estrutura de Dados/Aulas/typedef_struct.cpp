/******************************************************************************
 struct aninhadas 
    struct de struct
    typedef
*******************************************************************************/

//Programa ficha aluno

//Declaração de Biblioteca
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    //int matricula;
    //char nome[50];
    //flat nota;
    
    //float vnotas[20]; //vetor de 20 posições
    //float mnotas[10][2]; //matriz de 10 linhas e 2 colunas
    
    //Declaração da struct
    //struct <identificador>;
    //{
    //  <listagem dos tipos e membros>;
    //};
    
        typedef struct
        {
            int dia;
            int mes;
            int ano;
        }data;
        
        typedef struct
        {
            char rua[30];
            int numero;
            char bairro[30];
            char cidade[30];
            char estado [2];
            int cep;
        }endereco;
        
        struct ficha_aluno
        {
            int matricula;
            char nome[50];
            char diciplina[50];
            float nota;
            
            data data_aluno;
            endereco endereco_aluno;
            
        };
        
        //Declaração da variavel aluno do tipo struct ficha_aluno
        //vetor da struct de 2 posições
        
        struct ficha_aluno aluno[3];
        
        
        //função printf - impressão em template
        //função scanf - leitura de dados do teclado
        
        printf("\nFicha do Aluno\n");
        
        for(int i = 0; i < 3; i++)
        {
            printf("Matricula do aluno: ");
            scanf("%d", &aluno[i].matricula);
            
            printf("Nome do aluno: ");
            fflush(stdin);
            fgets(aluno[i].nome, 50, stdin);
            
            printf("Diciplina do aluno: ");
            fflush(stdin);
            fgets(aluno[i].diciplina, 50, stdin);
            
            printf("Nota do aluno: ");
            scanf("%f", &aluno[i].nota);
            
            printf("Data de nascimento: ");
            
            printf("Dia: ");
            scanf("%d", &aluno[i].data_aluno.dia);

            printf("Mes: ");
            scanf("%d", &aluno[i].data_aluno.mes);

            printf("Ano: ");
            scanf("%d", &aluno[i].data_aluno.ano);
            
            printf("Endereço: ");
            
            printf("Rua: ");
            fflush(stdin);
            fgets(aluno[i].endereco_aluno.rua, 30, stdin);

            printf("Bairro: ");
            fflush(stdin);
            fgets(aluno[i].endereco_aluno.bairro, 30, stdin);

            printf("Cidade: ");
            fflush(stdin);
            fgets(aluno[i].endereco_aluno.cidade, 30, stdin);

            printf("Estado: ");
            fflush(stdin);
            fgets(aluno[i].endereco_aluno.estado, 2, stdin);

            printf("CEP: ");
            scanf("%d", &aluno[i].endereco_aluno.cep);
        }

        
    

    return 0;
}

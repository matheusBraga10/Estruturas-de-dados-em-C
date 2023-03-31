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
            char nome;
            char diciplina;
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
            scanf("%s", &aluno[i].nome);
            
            printf("Diciplina do aluno: ");
            scanf("%s", &aluno[i].diciplina);
            
            printf("Nota do aluno: ");
            scanf("%.2f", &aluno[i].nota);
            
            printf("Data de nascimento: ");
            printf("Dia: ");
            scanf("%d", &aluno[i].data_aluno.dia);

            printf("Mes: ");
            scanf("%d", &aluno[i].data_aluno.mes);

            printf("Ano: ");
            scanf("%d", &aluno[i].data_aluno.ano);
            
            printf("Endereço: ");
            printf("Rua: ");
            scanf("%s", &aluno[i].endereco_aluno.rua);

            printf("Bairro: ");
            scanf("%s", &aluno[i].endereco_aluno.bairro);

            printf("Cidade: ");
            scanf("%s", &aluno[i].endereco_aluno.cidade);

            printf("Estado: ");
            scanf("%s", &aluno[i].endereco_aluno.estado);

            printf("CEP: ");
            scanf("%d", &aluno[i].endereco_aluno.cep);
        }

        
    

    return 0;
}

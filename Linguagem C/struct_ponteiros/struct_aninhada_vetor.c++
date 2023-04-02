#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct moradia
{
    char rua[40];
    int numero;
    char bairro[40];
    char cidade[40];
    char estado[3];
    int cep;
}moradia;

typedef struct data_nascimento
{
    int dia;
    int mes;
    int ano;
}data_nascimento;

typedef struct cadastro_cliente
{
    char nome[40];
    char telefone[20];

    struct moradia endereco;
    struct data_nascimento nascimento;
}clientes;

int main()
{
    
    clientes cliente[3];
    printf("\n\n***** CADASTRO DE CLIENTES *****\n\n");
    for(int i = 0; i < 3; i++)
    {
        printf("Nome do cliente: ");
        getchar();
        fgets(cliente[i].nome, 40, stdin);
        
        printf("Telefone do cliente: ");
        getchar();
        fgets(cliente[i].telefone, 20, stdin);
        
        printf("Digite o numero: ");
        scanf("%d", &cliente[i].endereco.numero);

        printf("Digite a rua: ");
        getchar();
        fgets(cliente[i].endereco.rua, 40, stdin);
        
        printf("Digite o bairro: ");
        getchar();
        fgets(cliente[i].endereco.bairro, 40, stdin);

        printf("Digite a cidade: ");
        getchar();
        fgets(cliente[i].endereco.cidade, 40, stdin);

        printf("Digite o estado: ");
        getchar();
        fgets(cliente[i].endereco.estado, 3, stdin);

        printf("Digite o CEP: ");
        scanf("%d", &cliente[i].endereco.cep);

        printf("Digite o dia de nascimento: ");
        scanf("%d", &cliente[i].nascimento.dia);
        
        printf("Digite o mes de nascimento: ");
        scanf("%d", &cliente[i].nascimento.mes);
        
        printf("Digite o ano de nascimento: ");
        scanf("%d", &cliente[i].nascimento.ano);

        printf("---------------------------------\n");
    }

    for(int i = 0; i < 3; i++)
    {
        printf("\n Cliente numero {%d}\n\n", i+1);
        printf("Nome: %s", cliente[i].nome);
        printf("Telefone: %s", cliente[i].telefone);

        printf("Endereço Numero: %d\n", cliente[i].endereco.numero);
        printf("Endereço Rua: %s", cliente[i].endereco.rua);
        printf("Endereço Bairro: %s", cliente[i].endereco.bairro);
        printf("Endereço Estado: %s", cliente[i].endereco.estado);
        printf("Endereço CEP: %d\n", cliente[i].endereco.cep);

        printf("Data de Nascimento Dia: %d\n", cliente[i].nascimento.dia);
        printf("Data de Nascimento Mês: %d\n", cliente[i].nascimento.mes);
        printf("Data de Nascimento Ano: %d\n", cliente[i].nascimento.ano);

        printf("\n\n---------------------------------------------\n\n");

    }
        




    return 0;
}

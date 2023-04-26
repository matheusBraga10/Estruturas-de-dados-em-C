#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct sistema_estoque
{
    int codigo;
    char nome[100];
    float preco_compra, preco_venda;
}produto;

float calculaMargemLucro(produto p)
{
    float resultado = p.preco_venda - p.preco_compra; 
    return resultado;
}

void verificarRentabilidade(produto p, float margemLucro)
{
    printf("CODIGO: %d\n", p.codigo);
    printf("NOME: %s\n", p.nome);
    printf("MARGEM DE LUCRO: %.2f\n", margemLucro);
    if (margemLucro >=  p.preco_compra/5)
    {    
        printf("E RENTAVEL!\n\n");
    }
    else  
    {
        printf("NAO E RENTAVEL!\n\n");
    }
}
int main ()
{
    produto p;
    float lucro;

    p.codigo = 100;
    strcpy(p.nome, "Cafe");
    p.preco_compra = 10;
    p.preco_venda = 20;
    lucro = calculaMargemLucro(p);
    verificarRentabilidade(p,lucro);

    p.codigo = 101;
    strcpy(p.nome, "Queijo");
    p.preco_compra = 10;
    p.preco_venda = 11;

    lucro = calculaMargemLucro(p);
    verificarRentabilidade(p,lucro);

    return 0;
}

#include<stdio.h>
#define ICMS 0.18; //declaração da constante como diretiva

int main(void)
{
    float preco_produto, valor_icms, valor_total;

    // const tipo nome_da_constante = valor_da_constante
    const float frete = 10.50;


    printf("Informe o valor do produto: ");
    scanf("%f", &preco_produto);

    valor_icms = preco_produto * ICMS;
    valor_total = preco_produto + valor_icms + frete;

    printf("Valor de importo a ser pago: R$ %.2f \n", valor_icms);
    printf("Valor total a pagar: R$ %.2f \n", valor_total);
    return 0;
}

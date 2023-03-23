#include<stdio.h>
#define ICMS 0.18; //declaração da constante
//Foi definido/declarado (com o #define) por mim, que o valor do ICMS é iguala 0.18
// O valor da constante não pode ser alterado no programa, somente na constante acima 

int main(void)
{
    float preco_produto, valor_icms;

    printf("Informe o valor do produto: ");
    scanf("%f", &preco_produto);

    valor_icms = preco_produto* ICMS;

    printf("Valor de imposto a ser pago: R$ %.2f", valor_icms);

    return 0;
}
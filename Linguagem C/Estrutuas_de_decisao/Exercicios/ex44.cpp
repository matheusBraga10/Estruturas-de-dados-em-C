/******************************************************************************

Elabore um programa que calcule o valor a ser pago por um produto, 
considerando seu preço normal e condição de pagamento:

- À vista dinheiro/cheque: 10% de desconto.
- À vista no cartão: 5% de desconto.
- Em até 2x no cartão: Preço normal.
- 3x ou mais no cartão: 20% de juros.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    float precoNormal, condicaoPagamento, precoFinal;
    
    printf("Entre com o preço do produto que pretende comprar: ");
    scanf("%f", &precoNormal);
    
    printf("Diga a condição que pretende pagar pelo produto: \n\n");
    printf("- À vista dinheiro/cheque: Digite 1\n- À vista no cartão: Digite 2\n- Em até 2x no cartão: Digite 3\n- 3x ou mais no cartão: Digite 4\nINFORME: ");
    scanf("%f", &condicaoPagamento);
    
    if (condicaoPagamento == 1)
    {
        precoFinal = precoNormal*0.9;
        printf("Você recebeu um desconto de 10%%. O valor que você terá de pagar é de %.2f", precoFinal);
    }
    else if(condicaoPagamento == 2)
    {
        precoFinal = precoNormal*0.95;
        printf("Você recebeu um desconto de 5%%. O valor que você terá de pagar é de %.2f", precoFinal);
    }
    else if(condicaoPagamento == 3)
    {
        precoFinal = precoNormal;
        printf("O valor que você terá de pagar é de %.2f", precoFinal);
    }
    else if(condicaoPagamento == 4)
    {
        precoFinal = precoNormal*1.2;
        printf("Você sofreu um juros de 20%%. O valor que você terá de pagar é de %.2f", precoFinal);
    }
    else 
    {
        printf("Opção de pagamento inválida. Favor, digite um numero de 1 a 4.");
    }
    return 0;
}
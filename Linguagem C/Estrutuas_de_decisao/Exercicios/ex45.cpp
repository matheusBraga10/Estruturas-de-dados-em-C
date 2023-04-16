/******************************************************************************

Cire um programa que faça o computador jogar JOKENPÔ com você.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    int jogada, pedra, papel, tesoura;
    
    printf("Escolha 1: Pedra\nEscolha 2: Papel\nEscolha 3: Tesoura\n\nINFORME SUA JOGADA! ");
    scanf("%f", &jogada);
    
    if ()
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
/******************************************************************************

Escreva um programa para aprovar o empréstimo bancário para a compra de uma
casa. O programa vai perguntar o valor da casa, o salário do comprador e
em quantos anos ele vai pagar.

Calcule o valor da prestação mensal, sabendo que ele não pode exceder 30% do
salário ou então o empréstimo será negado.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int tempo;
    float salario, valorCasa, parcelaAno, parcelaMes;
    
    printf("Qual o valor da casa? ");
    scanf("%f", &valorCasa);
    
    printf("Qual o salário do comprador? ");
    scanf("%f", &salario);
    
    printf("Quantos anos ele pretende parcelar o imóvel? ");
    scanf("%d", &tempo);
    
    parcelaAno = valorCasa/tempo;
    parcelaMes = parcelaAno / 12;
    
    printf("Valor da casa: %.2f\n", valorCasa);
    printf("Salário do comprador: %.2f\n", salario);
    printf("Tempo de compra em anos: %d\n", tempo);
    printf("Valor da parcela mensal: %.2f\n", parcelaMes);
    
    if (parcelaMes > (0.3 * salario))
        printf("O valor da parcela excede 30%% do salário. Empréstimo NEGADO!");
    else
        printf("O valor da parcela está dentro das regras de contrato. Empréstimo APROVADO!");
    

    return 0;
}

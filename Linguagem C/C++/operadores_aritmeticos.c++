#include<stdio.h>//biblioteca padrão para comandos de entrada e saída de dados
int main(void)
{
    int valor1, valor2;
    int soma, subtracao, multiplicacao, divisao, resto_div;

    printf("Testando operadores aritmeticos\n\n");
    printf("DIgite o primeiro valor: ");
    scanf("%d", &valor1);

    printf("DIgite o segundo valor: ");
    scanf("%d", &valor2);

    soma = valor1 + valor2;
    subtracao = valor1 - valor2;
    multiplicacao = valor1 * valor2;
    divisao = valor1 / valor2;
    resto_div = valor1 % valor2;

    printf("\nSoma = %d", soma);
    printf("\nSubtracao = %d", subtracao);
    printf("\nMultiplicacao = %d", multiplicacao);
    printf("\nDivisao = %d", divisao);
    printf("\nResto da divisao = %d\n", resto_div);

    return 0;
}
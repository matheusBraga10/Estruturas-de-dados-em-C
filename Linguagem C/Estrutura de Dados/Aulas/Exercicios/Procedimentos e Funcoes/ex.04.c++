#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int multiplica(int num1, int num2)
{
    int multiplicacao = num1 * num2;

    return multiplicacao;
}

int main()
{
    int x, y, m;
    printf("Digite o valor de X: ");
    scanf("%d", &x);

    printf("Digite o valor de Y: ");
    scanf("%d", &y);

    m = multiplica(x, y);

    printf("O resultado da multiplicação entre %d e %d é %d\n", x, y, m);

    return 0;
}
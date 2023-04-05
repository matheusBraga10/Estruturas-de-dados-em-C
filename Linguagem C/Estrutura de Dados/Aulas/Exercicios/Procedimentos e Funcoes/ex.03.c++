#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int maior(int num1, int num2)
{
    if (num1 > num2)
        return num1;
    else
        return num2;
}

int main()
{
    int x, y, m;

    printf("Digite um valor: ");
    scanf("%d", &x);
    
    printf("Digite outro valor: ");
    scanf("%d", &y);

    m = maior(x, y);

    printf("\nO maior valor é: %d\n", m);


    return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int primo( int num1)
{
    for( int i = num1; i >= 0; i--)
    {
        if (num1 % i == 0)
            printf("O numero %d, não é um numero primo", num1);

        else
            printf("O numero %d, é um numero primo", num1);
    }
    return num1;    
}

int main()
{
    int x, p;
    printf("DIgite um numero para saber se é primo: ");
    scanf("%d", &x);

    p = primo(x);

    return 0;
}
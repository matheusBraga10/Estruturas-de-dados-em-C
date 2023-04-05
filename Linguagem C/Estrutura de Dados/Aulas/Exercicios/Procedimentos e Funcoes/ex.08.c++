#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int primo( int num1)
{
    for ( int i = 2; i >= 2; i++)
    {
        if ((num1 == 1) || (num1 == 0)) return 1;
            
        else primo(num1/i);
    }
}

int main()
{
    int x, p;
    printf("DIgite um numero para saber se é primo: ");
    scanf("%d", &x);

    p = primo(x);

    return 0;
}
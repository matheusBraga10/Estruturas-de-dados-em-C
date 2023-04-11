#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

bool primo( int n, int d)
{
    static int div = 0;

    if (d > n)
        return n;
    if (n % d == 0)
        div++;
        primo(n , d + 1);

    if (div <= 2)
        return 1;
    return 0;
}

int main()
{
    int x = 0;
    printf("DIgite um numero para saber se é primo: ");
    scanf("%d", &x);

    if (primo(x, 1))
        printf("%d é primo!\n", x);
    else 
        printf("%d não é primo!\n", x);


    return 0;
}
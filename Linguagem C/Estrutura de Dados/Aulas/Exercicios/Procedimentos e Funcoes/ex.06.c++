#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int fatorial(int num1)
{
   if ((num1 == 1) || (num1 == 0)) return 1;
   else
        return fatorial(num1-1)*num1;
}

int main()
{
    int x, m;
    printf("Digite o valor de X: ");
    scanf("%d", &x);

    m = fatorial(x);

    printf("O resultado do fatorial de %d é %d\n", x, m);

    return 0;
}
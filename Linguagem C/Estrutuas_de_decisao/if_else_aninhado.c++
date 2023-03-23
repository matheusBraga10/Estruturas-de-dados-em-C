#include<stdio.h>
int main(void)
{
    int n1, n2;

    printf("Digite o 1o numero: ");
    scanf("%d", &n1);
    printf("Digite o 2o numero: ");
    scanf("%d", &n2);

    if (n1 == n2)
    {
        printf("Os numeros são iguais!\n10");
    }
    else
        if (n1 > n2)
        {
            printf("O maior valor é = %d\n", n1);
        }
        else
        {
            printf("O maior valor é = %d\n", n2);
        }
    return 0;
}
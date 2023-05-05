#include<stdio.h>
#include<stdlib.h>

//função que soma 10 ao valor recebido
void soma10(int *x)
{
    *x = *x + 10;
    return;
}
int main()
{
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("O numero digitado foi: %d\n", numero);

    //chaamda da função com ponteiro como parametro
    soma10(&numero);

    printf("Agora o numero vale: %d\n", numero);

    return 0;
}
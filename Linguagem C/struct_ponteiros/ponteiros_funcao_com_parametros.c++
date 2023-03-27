#include<stdio.h>
//função que soma 10 ao valor recebido
void soma10(int *x)
{
    *x += 10;
    return;
}
int main(void)
{
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("O numero digitado foi: %d\n", numero);

    //Chamada da função
    soma10(&numero);
    //Para ponteiro, passar endereço de numero '&'

    printf("O novo valor atribuido é: %d\n", numero);
    return 0;
}
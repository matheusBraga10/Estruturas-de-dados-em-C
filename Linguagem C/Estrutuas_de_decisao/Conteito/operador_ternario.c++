#include<stdio.h>

int main(void)
{
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    //condição "?" comando para condição verdadeira ":" comando para condição falsa
    numero >= 0 ? numero ++ : numero -- ;
    numero >= 0 ? printf("numero é positivo\n") : printf("numero é negavito\n");
//Para uma condição simples, realiza uma estrutura de decisão igual ao if - else
    printf("O novo valor de numero é: %d\n", numero);
    return 0;
}
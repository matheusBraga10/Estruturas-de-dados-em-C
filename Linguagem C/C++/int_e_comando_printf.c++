#include<stdio.h>//biblioteca padrão para comandas i/o
#include<stdlib.h>//necessário para o system ("pause")
int main (void)
{
    int n1 = 10;

    printf("Valor de n1 = %d\n", n1);//%d dentro do printf chama a variável int marcada

    n1 = 50;//atribuiindo o valor 50 para n1

    printf("Valor de n1 = %d\n", n1);

    system("pause");//pausa da tela - somente para windows
    return (0);//valor de retorno da função main
}
#include<stdio.h>

int main(void)
{
    int contador;

    for (contador = 50; contador > 20; contador --)
    {
        printf("O contador está decrescendo até 20 e seu número atual é: %d \n", contador);
    }
    printf("O CONTADOR CHEGOU A 20. FIM DO PROGRAMA!\n");
}
#include<stdio.h>

int main(void)
{
    //char nome_cliente[7] = "Fulano"; //6 posições úteis + 1 posição para o terminador
    char nome_cliente2[ ] = "Ciclano"; //Controla automaticamente

    printf("Nome do cliente: %s\n", nome_cliente2);
    return 0;

}
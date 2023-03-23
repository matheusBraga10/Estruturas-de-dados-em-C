#include<stdio.h>

int main(void)
{
    float variavel_teste;

    printf(" --- TIPO --- | --- BYTES --- \n");
    printf(" char ........: %d bytes\n", sizeof(char));
    printf(" short .......: %d bytes\n", sizeof(short));
    printf(" int .........: %d bytes\n", sizeof(int));
    printf(" long ........: %d bytes\n", sizeof(long));
    printf(" float .......: %d bytes\n", sizeof(float));
    printf(" double.......: %d bytes\n", sizeof(double));
    printf(" long double..: %d bytes\n\n", sizeof(long double));
    printf("\nO tamanho de variavel_teste é...: %d\n\n", sizeof variavel_teste);

    return 0;

/* O operador "sizeof" permite retornar a quantidade de memoria alocada (em bytes)
por um tipo de dados, ou por uma determinada variavel.
O valor retornado pode variar com a arquitetura da máquina que está sendo utilizada.
O sizeof pode ser usado de duas maneiras:
sizeof nome_da_variavel
sizeof (nome_do_tipo)  */
}
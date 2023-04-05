#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int soma (int a , int b)
{   
    int resultado = a + b;
    return resultado;
}


int main()
{
    int x = 5, y = 3;
    
    printf("A soma de %d e %d é igua a %d\n", x, y, soma(x, y));

    return 0;
}

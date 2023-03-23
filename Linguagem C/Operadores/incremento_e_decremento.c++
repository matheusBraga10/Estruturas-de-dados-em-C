#include<stdio.h>

int main(void)
{
    int x = 100, y = 10;
    printf("Valor inicial de x: %d \n", x);
    /*
        "x++" e "++x" equivale a fazer x = x + 1;
        
        Então qual a diferença entre os dois comandos? 
    */

    
    printf("\n--------------- Pos incremento ---------------\n\n");
    printf("Valor de x na mesma linha do pos incremento: %d \n", x++); //nesta linha vai exibir 100
    printf("Valor de x na mesma linha do pos incremento: %d \n", x); //nesta linha vai exibir 101

    printf("\n--------------- Pre incremento ---------------\n\n");
    printf("Valor de x na mesma linha do pre incremento: %d \n", ++x); //nesta linha vai exibir 102
    
    printf("\n\nValor inicial de y: %d \n", y); //nesta linha vai exibir 10
    printf("\n--------------- Pos decremento ---------------\n\n");
    printf("Valor de x na mesma linha do pos decremento: %d \n", y--); //nesta linha vai exibir 10
    printf("Valor de x na mesma linha do pos decremento: %d \n", y); //nesta linha vai exibir 9

    printf("\n--------------- Pre decremento ---------------\n\n");
    printf("Valor de x na mesma linha do pre decremento: %d \n", --y); //nesta linha vai exibir 8
    
}
/******************************************************************************

Faça um programa que identifique se três retas formam um triângulo ou não, e 
mostre que tipo de triângulo será formado:

- Equilátero
- Isósceles
- Escaleno

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    
    printf("Entre com o valor da primera reta: ");
    scanf("%f", &a);
    
    printf("Entre com o valor da segunda reta: ");
    scanf("%f", &b);
    
    printf("Entre com o valor da terceira reta: ");
    scanf("%f", &c);
    
    if ((a+b>c && c>fabs(a-b)) || (c+b>a && a>fabs(b-c)) || (a+c>b && b>fabs(a-c)))
    {
        printf("O seguimento de retas %.2f, %.2f e %.2f formam um triângulo do tipo ", a, b, c);
        if(a == b && b == c)
        {
            printf("Equilátero. Possuem todos os lados iguais.");
        }
        else if( a != b && b != c)
        {
            printf("Escaleno. Possuem todos os lados diferentes.");
        }
        else
        {
            printf("Isósceles. Possuem dois lados iguais e um diferente.");
        }
            
    }
    else
    {
        printf("O seguimento de retas %.2f, %.2f e %.2f NÃO É CAPAZ de formar um triângulo.", a, b, c);
    }
    return 0;
}
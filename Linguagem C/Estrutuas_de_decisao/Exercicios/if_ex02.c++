#include<stdio.h>

int main()
{
    float m;

    printf("Insira uma nota: ");
    scanf("%f", &m);

    if( m > 6.9)
        printf("Aprovado(a)!\n");
    else
        printf("Reprovado(a)!\n");
        
    return 0;
}
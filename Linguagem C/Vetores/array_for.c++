#include<stdio.h>

int main(void)
{
    int i;
    float nota[10], media;

    printf("Digite o valor das notas do aluno\n");

    for (i = 1 ; i <11; i ++)
    {
        printf("Digite o valor da %da nota: ", i);
        scanf("%f", &nota[i]);        
    }

    for (i = 1 ; i <= 10; i ++)
    {
        printf("O valor da %da nota foi de %.1f\n", i, nota[i]);
    }
    return 0;

}

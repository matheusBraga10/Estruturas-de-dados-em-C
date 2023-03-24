#include<stdio.h>

int main(void)
{
    float vetor[4], nota;
    int i;
    
    printf("Entre com 4 o valor das notas do aluno\n");

    for (i = 1; i <= 4; i ++)
    {
        printf("Digite a nota %da do aluno: ", i);
        scanf("%f", &vetor[i]);
            
    }
    for (i = 1; i <= 4; i ++)
    {
    printf("O valor da %da nota é de: %.1f\n", i, vetor[i]);
    }

    return 0;
}
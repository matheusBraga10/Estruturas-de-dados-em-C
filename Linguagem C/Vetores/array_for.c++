#include<stdio.h>

int main(void)
{
    int i, cont = 0;
    float nota[10], media;

    printf("Digite o valor das notas do aluno\n");

    for (i = 0 ; i < 10; i ++)
    {
        printf("Digite o valor da %da nota: ", (i + 1));
        scanf("%f", &nota[i]);        
    }

    for (i = 0 ; i < 10; i ++)
    {
        printf("O valor da %da nota foi de %.1f\n", (i + 1), nota[i]);
    }

    media = (nota[i++])/(cont++);
    printf("Valor da média é de: %.1f\n", media);
    printf("FIM DO PROGRAMA!");

    return 0;

}

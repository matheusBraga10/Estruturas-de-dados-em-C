#include<stdio.h>
int main(void)
{
    float n1, n2, media;

    printf("Digite o valor da 1o nota: ");
    scanf("%f", &n1);
    printf("Digite o valor da 2o nota: ");
    scanf("%f", &n2);

    media = (n1 + n2) / 2;

// se (não (media >= 7))
    if ( ! (media >= 7))
        printf("Média abaixo do minimo, você não foi classificado!\n");
    else
        printf("Você foi Classificado para a próxima etapa!\n");

    return 0;

}
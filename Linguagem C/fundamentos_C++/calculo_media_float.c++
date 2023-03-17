#include<stdio.h>
#include<stdalign.h>
int main(void)
{
    float nota1, nota2, media;
    printf("Digite a 1a nota do aluno: ");
    scanf("%f", &nota1);

    printf("Digite a 2a nota do aluno: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2)/2;

    printf("A media do aluno foi: %.2f\n", media);

    //system("pause"); caso a SO seja windows
    return 0;
}

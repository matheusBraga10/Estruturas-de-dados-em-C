#include<stdio.h>
int main(void)
{
    float nota_final, frequencia;

    printf("Digite a nota final do aluno: ");
    scanf("%f", &nota_final);
    printf("Digite a frequencia do aluno: ");
    scanf("%f", &frequencia);

    if (nota_final > 6.0 && frequencia >= 75)//&& representa and (e)
    {
        printf("aluno APROVADO!\n");
    }
    else
    {
        printf("Aluno REPROVADO!\n");
    }

    return 0;
}

//Para o operador && (E) o resultado será verdadeiro caso todas as comparações sejam verdadeiras
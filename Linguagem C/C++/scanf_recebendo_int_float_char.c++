#include<stdio.h>
int main (void)
{
    char conceito;//variável do tipo char armazena um único caracter na memoria
    float nota;
    int matricula;


    printf("Informe o conceito do aluno: ");
    scanf("%c", &conceito);
    
    printf("Informe a nota do aluno: ");
    scanf("%f", &nota);
    
    printf("Informe a matricula do aluno: ");
    scanf("%d", &matricula);
    
    printf("Conceito: %c\n",conceito);
    printf("Nota: %.1f\n",nota);
    printf("Matricula: %d\n",matricula);

    return 0;
}
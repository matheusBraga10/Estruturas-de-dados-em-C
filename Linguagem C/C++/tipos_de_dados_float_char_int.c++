#include<stdio.h>
int main (void)
{
    char letra;//variável do tipo char, contém caracteres
    int x;//variável para número inteiro
    float salario;//variável do tipo float (real) contém casas decimais

    //Atribuindo valores para as variáveis

    letra = 'a';
    x = 10;
    salario = 3972.50;

    //saída de dados na tela

    printf("letra = %c \n", letra);
    printf("x = %d \n", x);
    printf("salario = %.2f \n", salario);
 
    return 0;
}

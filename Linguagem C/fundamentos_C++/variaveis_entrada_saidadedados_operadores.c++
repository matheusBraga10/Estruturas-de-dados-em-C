#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int n = 10;// variável do tipo numero inteiro;
    float n2 = 6.79;//variável do tipo numero com casa decimais
    char letra = 'a';//variável do tipo caracter
    char frase[ ] = "Matheus Felipe Braga";//variável do tipo caracter com mais de 1 caracter
    double n3 = 1.234567;//variável do tipo numero de maior precisão que float
    int valor1, valor2, soma;    

    printf("numero inteiro '%d'\n numero com casa decimal '%.2f'\n letra '%c'\n frase '%s'\n numero double '%f'\n", n, n2, letra, frase, n3);  
    printf("Digite um valor inteiro: ");
    scanf("%d", &valor1);
    printf("Digite um valor inteiro: ");
    scanf("%d", &valor2);

    soma = valor1 + valor2;
    printf("Valor da soma de %d + %d = %d\n", valor1, valor2, soma);
    //system("pause"); //Somente para windows
    return 0;
}
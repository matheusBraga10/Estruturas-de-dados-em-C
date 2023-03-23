#include<stdio.h>

int main(void)
{
    float nota1 = 0, nota2 = 0, media = 0;
    int resposta;

    do
    {
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);

        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);

        media = (nota1 + nota2)/2;
        printf("Média do aluno = %.1f\n", media);

        printf("Digite 1 para continuar ou 2 para sair \n");
        scanf("%d", &resposta);
        
        /* 
        O "do while" tem como o parametro, a estrutura de repetição
        faça (do)
        {
            comandos...
        }
        enquanto a condição for verdadeira
         */
    } while (resposta == 1);

    return 0;
}
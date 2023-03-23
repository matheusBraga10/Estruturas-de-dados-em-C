#include<stdio.h>

int main(void)
{
    //Existem diversas formas para se gerar um loop infinito "for","while"...
    int contador, i;

    for( ; ; )//loop infinito
    {
        printf("loop infinito com laço for\n", contador);
        printf("Digitte um numero inteiro: ");
        scanf("%d", &contador);

        if(contador == 7)
        {
            printf("Saindo do ciclo 'for'\n");
            break;//quebra o ciclo fazendo com que saia da repetição
        }
    }

    for ( i = 0; ; i ++)//loop infinito
    {
        printf("loop infinito com laço for\n", i);
        printf("Digitte um numero inteiro: ");
        scanf("%d", &i);

        if(i == 500)
        {
            printf("Saindo do ciclo 'for'\n");
            break;//quebra o ciclo fazendo com que saia da repetição
        }
    }
    while (1)//loop infinito
    {
        printf("Loop infinito com while\n");
        scanf("%d", &i);

        if(i == 80)
        {
            printf("Saindo do ciclo 'while'\n");
            break;//quebra o ciclo fazendo com que saia da repetição
        }
        

    }
    return 0;
}

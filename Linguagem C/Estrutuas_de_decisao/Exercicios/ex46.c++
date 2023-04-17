/*

Faça um programa que mostre na tela uma contagem regressiva para estouro de fogos de artificio, indo de 10 até 0, com uma pausa de 1 segundo entre elas

*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
    int i = 0;
    printf("Contagem rergressiva para a explosão!!!");
    for(i = 10; i >= 0; i--)
    {
        printf("\n%d", i);
        sleep(1);
    }
    printf("\nBoom!\n");

    return 0;
}
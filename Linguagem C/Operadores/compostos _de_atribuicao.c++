#include<stdio.h>

int main(void)
{
    int num;//declarando uma variavel tipo inteira denominada "num"

    num = 10;//atribuindo o valor 10 para a variavel "num"

    printf("O valor inical de num = %d \n", num);

    num += 5;//equivale a fazer "num = num + 5"
    printf("\nO valor de num = %d \n", num);
    num -= 5;//equivale a fazer "num = num - 5"
    printf("\nO valor de num = %d \n", num);
    num *= 5;//equivale a fazer "num = num * 5"
    printf("\nO valor de num = %d \n", num);
    num /= 5;//equivale a fazer "num = num / 5"
    printf("\nO valor de num = %d \n", num);
    return 0;
}
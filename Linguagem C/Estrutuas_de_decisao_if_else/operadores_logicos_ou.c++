#include<stdio.h>
int main(void)
{
    float limite_min = 5.0, limite_max = 12.0, temperatura;

    printf("Informe o valor da temperatura: ");
    scanf("%f", &temperatura);

    //se (teperatura > limite_max OU temperatura < limite_min)
    if (temperatura > limite_max || temperatura < limite_min)
    {
        printf("ALERTA: Temperatura fora da faixa permitida!\n ");
    }
    else
    {
        printf("Temperatura dentro da normalidade!\n");
    }
    
    return 0;
}
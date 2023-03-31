/*
Crie uma struct "Ponto" com os campos "x" e "y". Em seguida, declare duas
variáveis dessa struct e preencha-as com valores lidos do teclado. Em seguida,
calcule a distância entre esses dois pontos e imprima o resultado na tela.
*/

#include<stdio.h>

int main(void)
{
    float calculo;
    struct ponto
    {
        float x;
        float y;
    };
    struct ponto distancia;
    
    printf("Entre com o valor de x: ");
    scanf("%f", &distancia.x);
    printf("Entre com o valor de y: ");
    scanf("%f", &distancia.y);
    
    calculo = distancia.y - distancia.x;
    
    printf("\n..... ..... A distância entre os pontos é ..... .....\n\n");
    printf(" Valor de x: %.2f\n", distancia.x);
    printf(" Valor de y: %.2f\n", distancia.y);
    printf(" Valor da distância: %.2f\n", calculo);
    
    return 0;
}
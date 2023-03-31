/*
Crie uma struct "Retângulo" com os campos "largura" e "altura". Em seguida, declare
uma variável dessa struct e preencha-a com valores lidos do teclado. Em seguida,
calcule a área do retângulo e imprima o resultado na tela.
*/

#include<stdio.h>

int main(void)
{
    float a;
    struct retangulo
    {
        float largura;
        float altura;
    };
    struct retangulo area;
    
    printf("===== ===== ÁREA DO RETANGULO ===== =====\n\n");
    printf("Entre com a largura: ");
    scanf("%f", &area.largura);
    printf("Entre com a altura: ");
    scanf("%f", &area.altura);
    a = area.largura*area.altura;
    printf("===== ===== RESULTADO ===== =====\n\n");
    printf("Largura: %.2f * Altura: %.2f = Área: %.2f", area.largura, area.altura, a);
    
    return 0;
    
}
/******************************************************************************

Crie um programa que leia duas notas de um aluno e calcule sua média, mostrando
uma mensagem no final, de acordo com a média atingida:
- Média abaixo de 5.0: REPROVADO
- Média entre 5.0 e 6.9: RECUPERAÇÃO
- Média 7.0 ou superior: APROVADO

*******************************************************************************/

#include <stdio.h>

int main()
{
    float nota1, nota2, media;
    
    printf("Entre com a primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Entre com a segunda nota: ");
    scanf("%f", &nota2);
    
    media = (nota1 + nota2)/2;
    
    if(media < 5.0)
        printf("A média foi de %.2f\nMédia abaixo de 5.0: REPROVADO", media);
    
    else if(media >= 7.0)
        printf("A média foi de %.2f\nMédia acima ou igual a 7.0: APROVADO", media);
    
    else
        printf("A média foi de %.2f\nMédia entre 5.0 e 6.9: RECUPERAÇÃO", media);
    
        
    
    return 0;
}

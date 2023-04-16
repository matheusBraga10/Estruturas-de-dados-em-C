/******************************************************************************

A Confederação Nacional de Natação precisa de um programa que leia o ano de
ascimento dos atletas e mostre sua categoria, de acordo com sua idade:

- Até 9 anos: MIRIM
- Até 14 anos: INFANTIL
- Até 19 anos: JUNIOR
- Até 20 anos: SÊNIOR
- Acima: MASTER

*******************************************************************************/

#include <stdio.h>

int main()
{
    int idade, anoNascimento, anoAtual;
    
    printf("Entre com o ano de nascimento do atleta: ");
    scanf("%d", &anoNascimento);
    
    printf("Entre com o ano atual: ");
    scanf("%d", &anoAtual);
    
    idade = anoAtual - anoNascimento;
    
    if(idade <= 9)
        printf("O atleta tem %d anos: MIRIM", idade);
    
    else if(idade <= 14)
        printf("O atleta tem %d anos: INFANTIL", idade);
    
    else if(idade <= 19)
        printf("O atleta tem %d anos: JUNIOR", idade);
    
    else if(idade <= 20)
        printf("O atleta tem %d anos: SÊNIOR", idade);
        
    else
        printf("O atleta tem %d anos: MASTER", idade);
    
        
    
    return 0;
}

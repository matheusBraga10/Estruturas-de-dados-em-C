/******************************************************************************

Faça um programa que leia o ano de nascimento de um jovem e informe, de acordo 
com sua idade:
- Se ele ainda vai se alistar ao serviço militar.
- Se é a hora de se alistar.
- Se já passou do tempo do alistamento.

Seu programa também deverá mostrar o tempo que falta ou que passou do prazo.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int anoNascimento, data, idade, tempo;
    
    
    printf("Entre com o ano de nascimento: ");
    scanf("%d", &anoNascimento);
    
    printf("Entre com o ano em que estamos: ");
    scanf("%d", &data);
    
    idade = data - anoNascimento;
    tempo = 17 - idade;
    
    if(idade < 17)
        printf("O jovem está com %d anos atualmente, e ele ainda vai se alistar ao serviço militar daqui a %d anos. ", idade, tempo);
    
    else if(idade > 18)
        printf("O jovem está com %d anos atualmente, e ele já passou do tempo do alistamento a %d anos. ", idade, (-tempo));
    
    else
        printf("O jovem está com %d anos atualmente, é a hora de se alistar.", idade);
    
        
    
    return 0;
}

/******************************************************************************

Desenvolva uma lógica que leia o peso e altura de uma pessoa, calcule seu IMC 
e mostre seu status, de acordo com a tabela abaixo

- Abaixo de 18,5: Abaixo do peso.
- Entre 18,5 e 25: Peso ideal.
- Entre 25 e 30: Sobrepeso.
- Entre 30 e 40: Obesidade.
- Acima de 40: Obesidade mórbida.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    float imc, peso, altura;
    
    printf("Entre com o peso da pessoa: ");
    scanf("%f", &peso);
    
    printf("Entre com a altura da pessoa: ");
    scanf("%f", &altura);
    
    imc = peso/pow(altura,2);
    
    if (imc < 18.5)
    {
        printf("O IMC está abaixo de 18,5: Abaixo do peso.");
    }
    else if(imc < 25)
    {
        printf("O IMC está entre 18,5 e 25: Peso ideal.");
    }
    else if(imc < 30)
    {
        printf("O IMC está entre 25 e 30: Sobrepeso.");
    }
    else if(imc < 40)
    {
        printf("O IMC está entre 30 e 40: Obesidade.");
    }
    else 
    {
        printf("O IMC está acima de 40: Obesidade mórbida.");
    }
    return 0;
}
#include<stdio.h>

int main(void)
{
    int contador; //variável de controle do loop
    //Para (variavel = 1; variavel menor igual a 10; variavel incrementa)
    //Laço "for" cria um loop no qual tem (variavel condição_inicial; variavel condição_final; variavel valor_condição (incremento, decremento, ...))
    for(contador = 1; contador <= 10; contador++)
    {
        printf("%d\n", contador);
    }
    
    return 0;

}
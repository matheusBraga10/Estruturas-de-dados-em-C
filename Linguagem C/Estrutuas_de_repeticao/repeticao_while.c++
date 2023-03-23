#include<stdio.h>

int main(void)
{
    int contador = 1; //declarando e inicializando a variavel controle

    while (contador <= 10)// Testando a condição
    {
        printf("%d\n", contador);//Executando um comando dentro do laço

        contador ++;//Atualizando a variavel de controle
    }
    
    return 0;
    //Similar ao laço "for" 
    /*
        while (condição)
        {
            instrução do bloco;
        }
    Enquanto a condição dentro de while for verdadeira, ele executará as instruções do bloco
    */
}
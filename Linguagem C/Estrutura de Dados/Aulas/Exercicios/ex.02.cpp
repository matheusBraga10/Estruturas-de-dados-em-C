/*
Crie uma struct "Carro" com os campos "marca", "modelo", "ano" e "preço". 
Em seguida, declare um array dessa struct com tamanho 3 e preencha-o com 
informações de carros diferentes. Em seguida, percorra o array e imprima as 
informações de cada carro na tela.
*/

#include<stdio.h>

int main(void)
{
    int i;
    struct carro
    {
        char marca[50];
        char modelo[50];
        int ano;
        float preco;
    };
    carro ncarro[3] = {
        {"Fiat", "Palio", 2016, 30009.99},
        {"Chevrolet", "Corsa", 2020, 350005.98},
        {"Ford", "Brazília", 1980, 150000.00}
    };

    for (i = 0; i < 3; i++)
    {
        printf("Marca : %s\n", ncarro[i].marca);
        printf("Modelo : %s\n", ncarro[i].modelo);
        printf("Ano : %d\n", ncarro[i].ano);
        printf("Preço : %.2f\n\n", ncarro[i].preco);
    }


    return 0;
}
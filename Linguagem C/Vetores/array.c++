#include<stdio.h>

int main(void)
{
    //Vetores (Arrays) são variáveis que tem várias posições de armazenamento
    int vetor[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    // tipo variavel [numero de posições de armazenamento]
    //primeira posição é sempre a posição "zero"
    float notas[5] = {7, 8, 9.5, 9.9, 5.2};
    //declarando e iniciando o vetor 
    int i;
    printf("Exibindo os valores do vetor \n\n");
    
    for(i = 0; i <= 4; i ++)
    {
        printf("notas[%d] = %.1f\n", i, notas[i]);
    }
    //Laço "for" e "array" trabalhando juntos em estrutura para repetição do vetor de forma inteligente 

    
    return 0;
}
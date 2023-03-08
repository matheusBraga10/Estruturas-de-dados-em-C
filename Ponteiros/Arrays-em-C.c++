#include<stdio.h>
int main(void)
{
    // declarando o vetor variavel
    //int variavel[10];
    // declarando e inicializando o vetor notas
        float notas[5] = {7, 8, 9.5, 9.9, 5.2};
        int i;
        printf("Exibindo os valores do Vetor \n\n");
        
        //printf("notas[0] = %.2f\n", notas[0]);
        //printf("notas[1] = %.2f\n", notas[1]);
        //printf("notas[2] = %.2f\n", notas[2]);
        //printf("notas[3] = %.2f\n", notas[3]);
        //printf("notas[4] = %.2f\n", notas[4]);
        
        //Ou

        for(i = 0; i <= 4; i++)
        {
            printf("notas[%d] = %.2f\n", i, notas[i]);
        }

    return 0;
}

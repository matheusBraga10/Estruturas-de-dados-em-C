#include<stdio.h>

int main(void)
{
    int matriz[3][3], i, j;

    printf("Entre com os valores para os elementos da matriz\n\n");

    for(i = 0; i < 3; i++)
    {
        printf("\n");
        for(j = 0; j < 3; j++)
        {
            
            printf("Elemento [%d] [%d] = ", i, j);
            scanf("%d", &matriz [i][j]);
        }
    }
    printf("\n\n******************** Saída de Dados ********************\n\n");

    for(i = 0; i < 3; i++)
    {
        printf("\n");
        for(j = 0; j < 3; j++)
        {
            
            printf("Elemento [%d] [%d] = [%d]\n", i, j, matriz[i][j]);
        }
    }
    

    return 0;
}
#include<stdio.h>

int main(void)
{
    /*
    O conceito de matriz é:
    matriz [linha] [coluna] = {{linha0coluna0, linha1coluna0}, {linha0coluna1, linha1coluna1}, {...}}
    */
    int matriz[3][3] = {{10, 20, 99},
                        {30, 40, 70},
                        {60, 50, 40}}, i, j;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("Valor da linha %d, coluna %d = %d\n" , i, j, matriz[i][j]);
        }
    }

    
    return 0;
}
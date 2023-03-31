/******************************************************************************
Disponiveis na Biblioteca stdlib.h

 malloc = Aloca um determinado numero de bytes na memoria, e retorna um poteiro 
para o primeiro byte alocado. Caso não seja possivel alocar, retorna null.

 calloc = Aloca um bloco de notas de tamanho suficiente para conter um vetor de
tamanho dinamico.

 realloc = Redimenciona uma função alocada para um novo tamanho.
 
 free = Libera um numero de bytes alocados previamente na memoria.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int *p;
    
    p = (int*) malloc(10*sizeof(int));
    
    if (p == NULL){
        printf("Espaço insuficiente\n");
        exit(1);
    }
    else
    {
        printf("Primeiros 10 numeros.\n");
        for (int i =0; i < 10; i++)
        {
            p[i] = i + 10;
            printf(" %d - %d \n", i, p[i]);
        }
    p = (int*) realloc(p, 20 * sizeof(int));
    
    printf("Realocado para mais 10 numeros. \n");
    for (int i = 10; i < 20; i++)
    {   
        p[i] = i + 20;
        printf(" %d - %d \n", i, p[i]);
        
    }
    printf("Todos os 20 numeoros alocados.\n");
    for (int i = 0; i < 20; i++)
    {
        printf(" %d - %d\n", i, p[i]);
        int* free(p);
    }
    }
    return 0;
}

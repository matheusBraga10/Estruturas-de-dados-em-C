/*ex.05*/
#include <stdio.h>
#include <string.h>
void imprimeNaTela(int vetor[ ], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
        printf("%d \n", vetor[i]);
}

int main()
{
    int a[ ] = {10, 20 , 30, 40, 50, 60, 70, 80, 90, 100};
    
    int b = sizeof(a)/ sizeof(a[0]);
    
    imprimeNaTela(a, b);
    return 0;
}

#include<stdio.h>
#include<string.h>

int main(void)
{
    char nome[ ] = "Matheus Felipe Braga";
    int i, cont = 0;

    
    for(i = 0; i < 20; i++)
    {
        printf("O valor do elemento %d da string = %c\n", i, nome[i]);
    }
    nome[4] = '\0';
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    for(i = 0; nome[i] != '\0'; i++)
    {
        
        printf("O valor do elemento %d da string = %c\n", i, nome[i]);
        cont++;
    }
    printf("Quantidade de caracteres da string: %d \n", cont);
    printf("Quantidade de caracteres da string usando srtlen: %d\n", strlen(nome));
    return 0;
}
#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE*arq;
    char frase[100];

    printf("Insira uma frase para o arquivo: ");
    scanf("%[^\ns]", frase);

    arq = fopen("teste.txt", "w");

    if(arq == NULL)
    {
        printf("Erro na criação do arquivo.\n");
    }

    else
    {
        fprintf(arq, "%s\n", frase);
        printf("O arquivo teste.txt foi criado com sucesso...!\n");
        fclose(arq);

    }
    return 0;
}
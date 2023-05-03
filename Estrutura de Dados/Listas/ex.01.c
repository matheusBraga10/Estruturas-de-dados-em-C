#include<stdio.h>
#define tam_max 100

int busca(int lista[], int valor)
{
    for(int i = 0; i < tam_max; i++)
    {
        if(lista[i] == valor)
        {
            return i;
        }
    }
    return -1;
}

int insere(int lista[], int valor)
{
    if(lista[tam_max -1] != 0)
    {
        printf("Erro: Lista cheia");
        return -1;
    }
    for(int i = 0; i < tam_max; i++)
    {
        if(lista[i] == 0)
        {
            lista[i] = valor;
            break;
        }
    }
    return 0;
}

int remove_valor (int lista[], int valor)
{
    int remove = busca(lista, valor);
    if(remove == -1)
    {
        printf("Valor não encontrado na lista\n");
    }
    else
    {
        for(int i = remove; i < tam_max -1; i++)
        {
            lista[i] = lista[i + 1];
        }
        printf("Valor removido com sucesso\n");
    }
}

int main()
{
    int vetor[tam_max] = {0};

    insere(vetor, 5);
    insere(vetor, 10);
    insere(vetor, 15);
    insere(vetor, 20);
    remove_valor(vetor, 5);
    int valor = busca(vetor, 15);


    return 0;
}
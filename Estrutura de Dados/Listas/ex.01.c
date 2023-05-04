#include<stdio.h>
#define tam_max 100

int busca(int lista[tam_max], int valor)
{
    int achou, i;
    for(i = 0; i < tam_max; i++)
    {
        if(lista[i] == valor)
        {
            achou = 1;
            break;
        }
    }
    if(achou == 1)
        {
            printf("O valor %d foi encontrado na posição %d\n", valor, i);
            return i;
        }
    else
        {
            printf("Valor não encontrado.\n");
            return -1;
        }
    return valor;
}

int insere(int lista[tam_max], int valor)
{
    if(lista[tam_max -1] != 0)
    {
        printf("Erro: Lista cheia\n");
        return -1;
    }
    else
    {
        for(int i = 0; i < tam_max; i++)
        {
            if(lista[i] == 0)
            {
                lista[i] = valor;
                break;
            }
        }
    }
    return 0;
}

int remove_valor (int lista[tam_max], int valor)
{
    int i, remove = busca(lista, valor);
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
    int valor1, valor2, valor3, valor4, valor5, valor6, vetor[tam_max] = {0};

    valor1 = insere(vetor, 5);
    valor2 = insere(vetor, 10);
    valor3 = insere(vetor, 15);
    valor4 = insere(vetor, 20);
    
    printf("Insira a chave de remoção:\n");
    scanf("%d", &valor5);
    remove_valor(vetor, valor5);
    
    printf("Insira a chave de busca:\n");
    scanf("%d", &valor6);
    busca(vetor, valor6);

    printf("[ ");
    for(int i = 0; i < tam_max; i++)
    {
        printf(" %d", vetor[i]);
    }
    printf(" ]");
    printf("\n");
    return 0;
}
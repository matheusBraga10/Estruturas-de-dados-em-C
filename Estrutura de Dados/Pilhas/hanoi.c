#include <stdio.h>
#include <stdlib.h>

typedef struct pilha
{
    int num;
    struct pilha *proximo;
    
}pilha;

typedef struct lista
{
    int nome;
    struct lista *proximo;
    pilha hanoi;
}lista;

void inicializa(lista *l, int valor){
    l->nome = 0;
    l->proximo = NULL;
    int contador = valor;
    for(int i=0; i < valor; i++){
        pilha *novo = (pilha *)malloc(sizeof(pilha));
        novo->proximo = NULL;
        l->hanoi.num = valor;
        valor--;
        l->hanoi.proximo = novo;
        novo->proximo = NULL;
        l->hanoi.proximo = l->hanoi.proximo->proximo;
    }
}


void criaHanoi(lista *l, pilha *p, int valor){
    for(int i = 0; i < valor-1; i++){
        lista *aux = (lista *)malloc(sizeof(lista));
        aux->nome = i+1;
        aux->proximo = NULL;
        l->proximo = aux;
        l->proximo = l->proximo->proximo; 
    }
}
int main(){

    return 0;
}
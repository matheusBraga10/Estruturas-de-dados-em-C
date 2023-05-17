#include<stdio.h>
#include<stdlib.h>

typedef struct No{
    int dado;
    struct No *proximo;    
}No;

void imprimeLista(No *no){
    if(no == NULL){
        printf("Pilha Vazia\n");
        return;
    }
    while (no != NULL){
        printf("[%d]\n", no->dado);
        no = no->proximo; 
    }
    printf("\n\n");
}

void inicioLista (No *no){
        no->dado = 0;
        no->proximo = NULL;
}

void proximoLista (No *no, int valor){
    No *novo = (No *)malloc(sizeof(No));
    novo->dado = valor;
    if(no->proximo == NULL){
        novo->proximo = NULL;    
        no->proximo = novo;
    }
    else{
        novo->proximo = no->proximo;
        no->proximo = novo;
    }
}

void remove(No *no, No *cabeca){
    if(no->proximo == NULL){
        cabeca->proximo = NULL;

    }
    else{
        cabeca->proximo = no->proximo;
    }
    free(no);
}


int main(){
    No no;
    No novo;
    inicioLista(&no);
    proximoLista(&no, 10);
    proximoLista(&no, 20);
    proximoLista(&no, 30);
    proximoLista(&no, 40);
    proximoLista(&no, 50);
    proximoLista(&no, 60);
    proximoLista(&no, 70);
    proximoLista(&no, 80);
    proximoLista(&no, 90);
    proximoLista(&no, 100);
    
    imprimeLista(no.proximo);

    remove(no.proximo, &no);
    imprimeLista(no.proximo);

    return 0;
}
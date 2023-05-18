#include <stdio.h>
#include <stdlib.h>

typedef struct No{
    int dado;
    struct No *prox;
}No;

void inicioPilha(No *no){
    no->dado = 0;
    no->prox = NULL;
}

void proxDado(No *no, int valor){
    No *novo = (No *)malloc(sizeof(No));
    novo->dado = valor;
    if(no->prox == NULL){
        no->prox = novo;
        novo->prox = NULL;
    }
    else{
        no->prox = novo;
        novo->prox = no->prox;
    }
}

void removeDado(No *no, No *cabeca){
    if(no->prox == NULL){
        cabeca->prox = NULL;
    }
    else{
        cabeca->prox = no->prox;
    }
    free(no);
}

void imprime(No *no){
    if(no == NULL){
        printf("Pilha vazia!\n");
        return;
    }
    while(no != NULL){
        printf("[%d]\n ", no->dado);
        no = no->prox;
    }
    printf("\n\n");
}

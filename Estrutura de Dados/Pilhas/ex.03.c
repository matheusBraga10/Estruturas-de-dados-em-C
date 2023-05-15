#include<stdio.h>
#include<stdlib.h>

typedef struct No{
    int dado;
    struct No *proximo;    
}No;

void imprimeLista(No *no){
    while (no != NULL){
        printf("[%d] ", no->dado);
        no = no->proximo;
    }
    printf("\n");
}

void inicioLista (No *no){
        no->dado = 0;
        no->proximo = NULL;
}

void proximoLista (No *no, int valor){
    while(no->proximo != NULL){
        no = no->proximo;
    }
    No *novo = (No *)malloc(sizeof(No));
    novo->dado = valor;
    novo->proximo = NULL;
    no->proximo = novo;
}

void remove(No *no){
    while(no->proximo != NULL){
        no = no->proximo;
    }
    printf("%d\n", no->dado);

    
    
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

    remove(no.proximo);
    imprimeLista(no.proximo);

    return 0;
}
#include<stdio.h>
#include<stdlib.h>

struct No {
    int dado;
    struct No* proximo;    
}No;

void imprimeLista(No *no){
    while (no != NULL){
        printf("%d", no-> dado);
        no = no->proximo;
    }
    printf("\n");
}



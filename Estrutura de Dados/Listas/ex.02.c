#include<stdio.h>
#include<stdlib.h>

typedef struct lista{
    int numero;
    struct lista *ponteiro; //Este ponteiro sempre aponta para o ultimo da lista. Caso seja o ultimo valor da lista, apontará valor nulo 
}lista;

void inicializa_lista(lista *l){
    l->numero = 0; //Quando se utiliza o endereço, deve ser feito com "->" 
    l->ponteiro = NULL;
}

void insere_lista(lista *l, int valor){
    while(l->ponteiro != NULL){
        l = l->ponteiro;
    }
    lista *novo = (lista *)malloc(sizeof(lista));
    novo->numero = valor;
    novo->ponteiro = NULL;
    l->ponteiro = novo;
}

void remove_lista(lista *l, int valor){
    if(l->ponteiro->numero == valor){
        if(l->ponteiro->ponteiro == NULL){
            free(l->ponteiro);
        }
        else{
            lista *auxiliar = (lista *)malloc(sizeof(lista));
            auxiliar = l->ponteiro->ponteiro;
            free(l->ponteiro);
            l->ponteiro = auxiliar;
            free(auxiliar);
        }
    }
    remove_lista(l->ponteiro, valor);
}
void busca_lista(lista *l, int valor);
    while(l->ponteiro != NULL){
        if(l->numero == valor){
            printf("Valor %d, na posição %d\n", valor, i);
            return;
        }
        i++;
        l = l->ponteiro;
    }
    printf("Valor ")
int main(){
    lista l;
    inicializa_lista(&l);



    

    return 0;
}
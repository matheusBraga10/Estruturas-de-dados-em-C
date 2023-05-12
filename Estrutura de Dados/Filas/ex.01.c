#include<stdio.h>
#include<stdlib.h>

typedef struct lista{ //Estrutura de numeros inteiros que recebem ponteiros
    int numero; 
    struct lista *ponteiro; //Este ponteiro sempre aponta para o ultimo da lista. Caso seja o ultimo valor da lista, apontará valor nulo 
}lista;

void inicializa_lista(lista *l){  //Estou inicializando uma lista de ponteiros
    l->numero = 0; //Quando se utiliza o endereço, deve ser feito com "->"  //O elemento "l" da lista tem seu numero igual a zero
    l->ponteiro = NULL; // O elemento "l" da lista tem seu ponteiro igual a "NULL"
}

void insere_lista(lista *l, int valor){ 
    while(l->ponteiro != NULL){ //Quando o ponteiro do elemento "l" for diferente de "NULL"
        l = l->ponteiro; //O elemento "l" receberá o ponteiro de "l"
    }
    lista *novo = (lista *)malloc(sizeof(lista)); //Aloca um novo elemento "novo" na lista
    novo->numero = valor; //O numero do elemento "novo" recebe "valor" 
    novo->ponteiro = NULL; // O ponteiro do elemento "novo" recebe "NULL" 
    l->ponteiro = novo; // O ponteiro do elemento "l" recebe "novo" 
    //Assim, se cria um novo elemento "novo" toda vez que for dar entrada em "valor", e o elemento "novo" antigo, passa a ser "l"
}

void remove_lista(lista *l){ 
    if(l->ponteiro != NULL){
        lista *auxiliar = (lista *)malloc(sizeof(lista));
        l->numero = auxiliar->numero; 
        auxiliar->ponteiro = l->ponteiro;
        free(auxiliar);
        
        printf("%d\n",l->numero);
    }
}

void busca_lista(lista *l, int valor){
    int i = 0;
    while(l->ponteiro != NULL){
        if(l->numero == valor){
            printf("Valor %d, na posição %d\n", valor, i);
            return;
        }
        i++;
        l = l->ponteiro;
    }
    if(l->numero == valor){
        printf("Valor %d, na posicao %d\n", valor, i);
        return;
    }
    printf("Valor nao encontrado na lista\n ");
}

void imprime_lista(lista *l){
    while(l->ponteiro != NULL){
        printf("%d ", l->numero);
        l = l->ponteiro;
    }
    printf("%d ", l->numero);
    printf("\n");
}

void limpa_lista(lista *l){
    while(l->ponteiro != NULL){
        lista *auxiliar = (lista *)malloc(sizeof(lista));
        auxiliar = l;
        l = l->ponteiro;
        free(auxiliar);
    }
    free(l);
}

int main(){
    lista l;
    inicializa_lista(&l);
    insere_lista(&l, 10);
    insere_lista(&l, 11);
    insere_lista(&l, 12);
    insere_lista(&l, 13);
    insere_lista(&l, 14);

    imprime_lista(l.ponteiro);
    busca_lista(l.ponteiro, 12);
    busca_lista(l.ponteiro, 14);
    busca_lista(l.ponteiro, 16);

    remove_lista(l.ponteiro);
    imprime_lista(l.ponteiro);

    limpa_lista(l.ponteiro);
    l.ponteiro = NULL;
    insere_lista(&l, 55);
    insere_lista(&l, 56);
    insere_lista(&l, 57);
    imprime_lista(l.ponteiro);

    return 0;
}
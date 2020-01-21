#include <stdio.h>

typedef struct celula{
    int m;
    char l; 
    struct celula *proximo;
} Celula;

void cria(){
    Celula *lista = (Celula*) malloc(sizeof(Celula));
}

int insere(Celula *lista, int m, char l){

    if (lista == NULL){
        return 0;
    }

    if (lista -> proximo  == NULL){
        Celula *new;

        new = lista;
        new -> m = m;
        new -> l = l;
        new -> proximo = NULL;
        lista -> proximo = new;

        return 1;
    }

    lista -> m = m;
    lista -> l = l;
    lista -> proximo = NULL;
}



int main (){
    
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

typedef struct pilha{
    char dado;
    struct pilha *prox;
} pilha;

int inicia (pilha *p){
    if (p == NULL)
        return 0;
    
    p->prox = NULL;

    return 1;
}

int empilha(pilha *p, char nome){
    if (p == NULL)
        return 0;
    
    pilha *novo;
    novo = malloc(sizeof(pilha));
    
    if (novo == NULL)
        return 0;

    novo->prox = p->prox;
    p->prox = novo;
    novo->dado = nome;

    return 1;
}

char desempilha(pilha *p, char *desem){
    if (p == NULL)
        return 0;
    
    pilha *aux;
    aux = malloc(sizeof(pilha));

    aux = p->prox;
    *desem = aux->dado;
    p->prox = aux->prox;
    free(aux);

    return *desem;

}

int compara(char *nome, pilha *p, int qtd, char *desem){
    if (p == NULL)
        return 0;
    
    int i;
    pilha *aux;

    for (i=0; i<qtd; i++){
        if (nome[i] != desempilha(p, desem))
            return 0;
    }

    return 1;

}



int main(){

    int qtd;
    char nome[50], *desem, y;
    pilha *p;

    desem = &y;
    p = malloc(sizeof(pilha));
    inicia(p);
    scanf("%d", &qtd);
    scanf("%s", nome);

    for (int i=0; i < qtd; i++){
        empilha(p, nome[i]);
    }

    if (compara(nome, p, qtd, desem) == 1)
        printf("1\n");
    else
        printf("0\n");

    // printf("\n");

    // for (pilha *i = p->prox; i != NULL; i = i->prox){
    //     printf("%c ", i->dado);
    // }

    // printf("\n");

    return 0;
}
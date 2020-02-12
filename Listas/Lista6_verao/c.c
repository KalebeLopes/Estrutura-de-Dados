#include <stdio.h>
#include <stdlib.h>

typedef struct pilha{
    int dado;
    struct pilha *prox;
} pilha;


int aloca(pilha *p, int qtd){
    if (p == NULL)
        return 0;
    
    for (int i = qtd; i>0; i--){
        pilha *novo = malloc(sizeof(pilha));
        novo->prox = p->prox;
        p->prox = novo;
        novo->dado = i;
    }
    
    return 1;
}

int empilha(pilha *p, int valor){
    if (p == NULL)
        return 0;
    
    pilha *novo = malloc(sizeof(pilha));
    
    novo->prox = p->prox;
    p->prox = novo;
    novo->dado = valor;

}

pilha *enfilera(pilha *p, int valor){
    pilha *novo = malloc(sizeof(pilha));
    
    novo->prox = p->prox;
    p->prox = novo; 
    p->dado = valor;

    return p->prox;
}

int remover(pilha *p){
    if (p == NULL || p->prox == NULL)
        return 0;
    
    int valor;
    pilha *lixo = malloc(sizeof(pilha));

    lixo = p->prox;
    valor = lixo->dado;
    p->prox = lixo->prox;
    free(lixo);

    return valor;

}

int desen(pilha *p){
    if (p == NULL)
        return 0;

    int valor;
    pilha *lixo = malloc(sizeof(pilha));
    pilha *i;

    for(i = p->prox; i->prox->prox != NULL; i = i->prox);

    lixo = i->prox;
    valor = lixo->dado;
    i->prox = lixo->prox;

    return valor;

}

int verifica(pilha *p1, pilha *p2 ,pilha *p3, int qtd){
    if (p1 == NULL || p2 == NULL || p3 == NULL)
        return 0;

    int qtd1 = qtd, qtd2 = 0;
    while (qtd1 >= 2){

        if (qtd2 < qtd){
            empilha(p3, remover(p1));
            enfilera(p2, remover(p1));
        }

        // empilha(p3, remover(p2));
        // empilha(p2, remover(p2));



        qtd1 --;
        qtd2 ++;
    }


    return 1;
}

int main(){

    int qtd;
    pilha *p1, *p2, *p3;

    scanf("%d", &qtd);

    p1 = malloc(sizeof(pilha));
    p1->prox = NULL;
    p2 = malloc(sizeof(pilha));
    p2->prox = p2;
    p3 = malloc(sizeof(pilha));
    p3->prox = NULL;

    aloca(p1, qtd);

    verifica(p1, p2, p3, qtd);

    pilha *i;
    for (i = p2->prox; i != p2; i = i->prox){
        //printf("aq");
        printf("%d ", i->dado);
    }

    printf("\n");

    // for (i = p2->prox; i != NULL; i = i->prox){
    //     //printf("aq");
    //     printf("%d\n", i->dado);
    // }



    
    

    return 0;
}
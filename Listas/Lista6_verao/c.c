#include <stdio.h>
#include <stdlib.h>

typedef struct pilha{
    int dado;
    struct pilha *prox;
} pilha;

typedef struct v{
    int *dado;
    int p, u, N;
} v;


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

int enfilera(v *p, int valor){
    // pilha *novo = malloc(sizeof(pilha));
    
    // novo->prox = p->prox;
    // p->prox = novo; 
    // p->dado = valor;

    // return p->prox;

    if (p->u == p->N){
        p->dado = realloc(p->dado, 2  *p->N * sizeof(int));
        if(p->dado == NULL)
            return 0;
        p->N *= 2;
    }

    p->dado[p->u] = valor;
    p->u ++;

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

int desen(v *p){
    if (p->p == p->u)
        return 0;

    int x;
    x = p->dado[p->p];
    p->p ++;

    return x;

}

int verifica(pilha *p1, v *p2 ,pilha *p3, int qtd){
    // if (p1 == NULL || p2 == NULL || p3 == NULL)
    //     return 0;

    int qtd1 = qtd, qtd2 = 0;
    while (qtd1 >= 2){

        if (qtd2 < qtd/2){
            empilha(p3, remover(p1));
            enfilera(p2, remover(p1));
            qtd2 ++;
        }
        else {
            empilha(p3, desen(p2));
            enfilera(p2, desen(p2));
        }

        qtd1 --;
        
    }


    return p2->p;
}

int main(){

    int qtd, x;
    v *p2;
    pilha *p1, *p3, *p4;

    scanf("%d", &qtd);

    p1 = malloc(sizeof(pilha));
    p1->prox = NULL;
    p2 = malloc(sizeof(v));
    p2->N = qtd;
    p2->dado = malloc(sizeof(int) * p2->N);
    p2->u = p2->p = 0;

    // p2->prox = p2;
    p3 = malloc(sizeof(pilha));
    p3->prox = NULL;

    p4 = malloc(sizeof(pilha));
    p4->prox = NULL;

    aloca(p1, qtd);

    x = verifica(p1, p2, p3, qtd);

    pilha *i;
    for (i = p3->prox; i != NULL; i = i->prox){
        //printf("aq");
        empilha(p4, i->dado);
    }

    printf("Cartas descartadas: ");
    for (i = p4->prox; i->prox != NULL; i = i->prox){
        printf("%d, ", i->dado);
        //empilha(p4, i->dado);
    }
    printf("%d\n", i->dado);

    printf("Carta restante: %d\n", x);

    // for (i = p2->prox; i != NULL; i = i->prox){
    //     //printf("aq");
    //     printf("%d\n", i->dado);
    // }



    
    

    return 0;
}
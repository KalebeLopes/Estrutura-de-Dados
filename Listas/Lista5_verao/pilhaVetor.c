#include <stdio.h>
#include <stdlib.h>

#if TIPO == 0
#define item char
#elif TIPO == 1
#define item int
#elif TIPO == 2
#define item double
#endif

typedef struct pilha {
    item *dados;
    int N, topo;
} pilha;

void inicializa (pilha *p){
    p->N = 5;
    p->dados = malloc(p->N * sizeof(item));
    if(p->dados == NULL){
        return;
    }
    p->topo = 0;
}

int empilha (pilha *p, item x){
    if (p->dados == NULL){
        return 0;
    }

    if (p->topo == p->N){
        printf("Realoquei\n");
        p->dados = realloc(p->dados, 2 * p->N * sizeof(item));
    
        if (p->dados == NULL)
            return 0;
    
        p->N *= 2;
    }
    p->dados[p->topo] = x;
    p->topo++;

    return 1;
}

int desempilha (pilha *p, item *y){
    if (p->dados == NULL || p->topo == 0)
        return 0;

    else {
        p->topo--; 
        *y = p->dados[p->topo];
    }
    return 1;

}

int main(){

    pilha *p;
    int i, *y, x;

    y = &x;

    p = malloc(sizeof(pilha));

    inicializa(p);
    empilha(p, 1);
    empilha(p, 2);
    empilha(p, 3);
    empilha(p, 4);
    empilha(p, 5);
    desempilha(p, y);
    empilha(p, 6);
    empilha(p, 6);
    desempilha(p, y);

    for (int i = 0; i < p->topo; i++){
        printf("%d\n", p->dados[i]);
    }
    

    return 0;
}
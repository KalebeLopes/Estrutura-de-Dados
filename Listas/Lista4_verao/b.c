<<<<<<< HEAD
#include <stdlib.h>
#include <stdio.h>

typedef struct celula {
=======
#include <stdio.h>
#include <stdlib.h>

typedef struct celula{
>>>>>>> cde37089bc60238cbe495c976e978db95db371eb
    int dado;
    struct celula *prox;
} celula;

celula *busca (celula *le, int x){
<<<<<<< HEAD
    celula *aux;

    for (aux = le->prox ; aux->dado != x && aux != NULL; aux = aux->prox);
    
    if (aux == NULL)
        return 0;
    
    // if (aux->dado != x)
    //      return 0;

    return aux;

}

celula *busca_rec (celula *le, int x){
    
}


int main(){

    celula *p, *a1, *a2, *aux;

    p = malloc(sizeof(celula));
    a1 = malloc(sizeof(celula));
    a2 = malloc(sizeof(celula));
    
    p->prox = a1;

    a1->prox = a2;
    a1->dado = 1;

    a2->prox = NULL;
    a2->dado = 2;

    aux = busca(p, 3);

    if (aux == NULL){
        printf("Elemento n ta na lista\n");
    }
    else{
        printf("%d\n", aux->dado);
    }
    


    return 0;
}
=======
    celula *p;
    for (p = le->prox;  p->dado != x && p->prox != NULL; p = p->prox);
    // if (p == NULL || p -> dado != x){
    //     printf("N ACHEI\n");
    //     return 0;
    // }
    
    if (p->dado == x){
        //printf("O elemento é: %d\n", p -> dado);
        return p;
    }

    //printf("N ACHEI\n");
    return NULL;
}

celula *busca_rec (celula *le, int x){
    celula *p = le->prox;   

    if (p ==  NULL){
        return NULL;
    }

    if (p->dado == x){
        return p;
    }
        
    return busca_rec(p, x);

}

// int main(){

//     celula *le, *n1, *n2, *n3, *aux;

//     le = malloc (sizeof(celula));
//     n1 = malloc (sizeof(celula));
//     n2 = malloc (sizeof(celula));
//     n3 = malloc (sizeof(celula));

//     le->prox = n1;
//     n1->dado = 1;
//     n1->prox = n2;
//     n2->dado = 2;
//     n2->prox = n3;
//     n3->dado = 3;
//     n3->prox = NULL;

//     aux = busca(le, 4); 

//     if (aux != NULL)
//         printf("O elemento é: %d\n", aux -> dado);
//     else 
//         printf("N ACHEI\n");

//     aux = busca_rec(le, 1); 

//     if (aux != NULL)
//         printf("O elemento é: %d\n", aux -> dado);
//     else 
//         printf("N ACHEI\n");


//     return 0;
// }
>>>>>>> cde37089bc60238cbe495c976e978db95db371eb

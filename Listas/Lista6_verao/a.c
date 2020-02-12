#include <stdio.h>
#include <stdlib.h>

typedef struct celula{
    char l;
    struct pilha *prox;    
} celula;

int inicia(celula **pilha){
    if (pilha == NULL)
        return 0;

    for (int i = 0; i < 31; i++){
        pilha[i] = malloc(sizeof(celula));
        pilha[i]->prox = NULL;
    }
    
    //printf("INICIOU\n");
    return 1;
}

int desempilha(celula *p){ 
    
    if (p == NULL)
        return 0;

    celula *lixo = malloc(sizeof(celula));

    lixo = p->prox;
    p->prox = lixo->prox;

    free(lixo);

    return 1;
}

int empilha(celula *p, char l){
    if (p == NULL)
        return 0;
   
    //printf("%d%c\n", tam, l);

    celula *novo;
    novo = malloc(sizeof(celula));

    if (novo == NULL)
        return 0;
    
    
    novo->prox = p->prox;
    p->prox = novo;
    novo->l = l;
   
    //printf("%d%c\n", novo->tam, novo->l);

    return 1;
}

int main(){
   
    int *count, tam, x = 0;
    char l;
    celula *pilha[31];

    count = &x;

    inicia(pilha);

    while (scanf("%d %c", &tam, &l) != EOF){
        if (pilha[tam-30]->prox == NULL){
            //printf("entrou ");
            empilha(pilha[tam-30], l);
            //printf("%c", a->l);
        }

        else {
            celula *aux = malloc(sizeof(celula));
            aux = pilha[tam-30]->prox;
            
            if (aux->l != l){
                *count += 1;
                desempilha(pilha[tam-30]);
            }

            else
                empilha(pilha[tam-30], l);
        }        
    }

    printf("%d\n", *count);

    return 0;
}




// NA PROVA
//  UTILIZAR BUSCA BINARIA NUM CONJUNTO DE DADOS NAO ORDENADO
// QUESTAO SEMELHANTE A DA LISTA
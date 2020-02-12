#include <stdio.h>
#include <stdlib.h>

typedef struct celula{
    char l;
    struct pilha *prox;    
} celula;

// int inicia(celula *pilha){
//     if (pilha == NULL)
//         return 0;
   
//     pilha->prox = NULL;
//     return 1;
// }

int desempilhar(celula *pilha){
    return 1;
}

// int empilha(pilha *p, int tam, char l){
//     if (p == NULL)
//         return 0;
   
//     //printf("%d%c\n", tam, l);

//     pilha *novo;
   
//     novo = malloc(sizeof(pilha));
//     if (novo == NULL)
//         return 0;
    
//     novo->prox = p->prox;
//     p->prox = novo;
//     novo->tam = tam;
//     novo->l = l;
   
//     //printf("%d%c\n", novo->tam, novo->l);

//     return 1;
// }

// int compara(pilha *p, int *count){
//     if (p == NULL)
//         return 0;
   
//     pilha *lixo, *i;
//     lixo = malloc(sizeof(pilha));
//     if (lixo == NULL)
//         return 0;
       
   
//     for (lixo = p->prox; lixo->prox != NULL; lixo = lixo->prox){
//         printf("%d", p->tam);
//         for (i = lixo->prox; lixo->tam != i->tam && i != NULL; i = i->prox);
//             printf("%d\n", i->tam);
//             if (lixo->l != i->l){
//                 *count += 1;
                
//             }
//     }

//     return 1;
// }

int main(){
   
    int *count, tam, x = 0;
    char l;
    celula *pilha[31];

    count = &x;

    *pilha = malloc(31 * sizeof(celula));
    pilha[1]->l = 'a';
    printf("%c", pilha[1]->l);
    //pilha[0]->prox = NULL;
    
    // while (scanf("%d%s", &tam, &l) != EOF){
    //     if (pilha[tam]->prox == NULL){
    //         empilhar(pilha[tam], l);
    //     }
    //     else {
    //         celula *aux = sizeof(celula);
    //         aux = pilha[tam]->prox;
            
    //         if (aux->l != l){
    //             *count += 1;
    //             desempilhar(pilha[tam]);
    //         }
    //         else
    //             empilha(pilha[tam], l);
    //     }        
    // }
    

    // inicia(pilha[0]);

    // //compara(p, count);
    // printf("%c\n", pilha[0]->l);
   
    return 0;
}




// NA PROVA
//  UTILIZAR BUSCA BINARIA NUM CONJUNTO DE DADOS NAO ORDENADO
// QUESTAO SEMELHANTE A DA LISTA
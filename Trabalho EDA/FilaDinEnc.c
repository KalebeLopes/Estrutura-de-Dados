#include <stdio.h>
#include <stdlib.h>
#include "FilaDinEnc.h"     // INCLUI PROTÓTIPOS

//  DEFINICAO TIPO FILA
struct elemento{
    struct aluno dados;
    struct elemento *prox;
};
typedef struct elemento Elem;

// DEFINICAO DO NO DESCRITOR DA FILA
struct fila{
    struct elemento *inicio;
    struct elemento *final;
    int qtd;
};


// CRIA FILA
Fila *cria_fila(){
    Fila *fi = (Fila*) malloc (sizeof(struct fila));

    if (fi != NULL){
        fi -> final = NULL;
        fi -> inicio = NULL;
        fi -> qtd = 0;
    }
    return fi;
}

// DESTROI FILA
void libera_fila(Fila *fi){
    if (fi != NULL){
        Elem *no;
            while (fi -> inicio != NULL){
                no = fi -> inicio;
                fi -> inicio = fi -> inicio -> prox;
                free (no);
            }
            free (fi);
    }
}

// TAMANHO FILA
int tamanho_fila (Fila *fi){
    if (fi == NULL)
        return 0;
    
    return fi -> qtd;
}

// FILA CHEIA
int fila_cheia (Fila *fi){
    return 0;
}

// FILA VAZIA
int fila_vazia (Fila *fi){
    if (fi == NULL)
        return -1;
    if (fi -> inicio == NULL)
        return 1;
    return 0;
}

// INSERIR ELEMENTO NA FILA
int insere_fila(Fila *fi, struct aluno al){
    if (fi == NULL)
        return 0;
    
    Elem *no = (Elem*) malloc(sizeof(Elem)); 

    if (no == NULL)
        return 0;
    
    no -> dados = al;
    no -> prox = NULL;

    if (fi -> final == NULL)
        fi -> inicio = no;
    else
        fi -> final -> prox = no;
    
    fi -> final = no;
    fi -> qtd++;
    return 1;

}

// REMOVENDO ELEMENTO DA FILA
int remove_fila (Fila *fi){
    if (fi == NULL)
        return 0;
    if (fi -> inicio == NULL)
        return 0;
    
    Elem *no = fi -> inicio;
    fi -> inicio = fi -> inicio -> prox;
    free (no);

    if (fi -> inicio == NULL)
        fi -> final == NULL;   
    
    fi -> qtd--;
    return 1;
}
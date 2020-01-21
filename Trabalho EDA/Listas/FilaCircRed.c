#include <stdio.h>
#include <stdlib.h>
#include "FilaCircRed.h"     // INCLUI PROTÓTIPOS

struct fila{
    int *fila;
    int inicio, final, qtd;
};

Fila *cria_fila(){
    Fila *fi;

    
    fi = (Fila*) malloc(sizeof(struct fila));
    
    fi -> qtd = 5;
    fi -> fila = malloc(fi->qtd * sizeof(int));

    fi->inicio = 0;
    fi->final = 0;
    
    return fi;

}

int insere_fila(Fila *fi){
    
    int x = 1, valor = 0;

    printf("Informe o valor a ser inserido: \n");
    scanf("%d", &valor);

    if(fila_cheia(fi))
        x = redimensiona(fi);

    if(x){
        fi->fila[fi->final++] = valor;
        if(fi->final == fi->qtd){
            fi->final = 0;
        }
    }
    return x;
}

int remove_fila(Fila *fi){
    if(!fila_vazia(fi)){
        *fi->fila = fi->fila[fi->inicio++];

        if(fi->inicio == fi->qtd)
            fi->inicio = 0;            
        
        return 1;
    }
    return 0;
}

int fila_cheia(Fila *fi){
    return (fi->final + 1) % fi->qtd == fi->inicio;
}

int fila_vazia(Fila *fi){
    return fi->inicio == fi->final;
}

int tamanho_fila(Fila *fi){
    int total = fi->final - fi->inicio;

    if(fi->inicio > fi->final){
        total = fi->qtd + total;
    }

    return total;
}

void imprime_fila(Fila *fi){
    printf("-------------------------------------------------------------\n|");
    for(int i = 0; i < fi->qtd; i++){
        if(fi->fila[i] == 0){
            printf(" xxx |");
        }
        else{
            printf("  %d  |", fi -> fila[i]);
        }
    }
    printf("\n-------------------------------------------------------------\n");
    if(fi->inicio == 0 && fi->final == 0){
        printf("\n");
    }
    else{
        for(int i = 0; i < fi->qtd; i++){
            if(fi->fila[i] != 0){             
                break;
            }
            else{
                printf("    ");
            }
        }
        for(int i = 0; i < fi->qtd; i++){
            if(fi->fila[i] != 0 && fi->fila[i+1] == 0){
                printf("\n");
                break;
            }
                else{
                printf("     \n");
            }
        }
    }
}

int redimensiona(Fila *fi){
    int i, j;
    fi->fila = realloc(fi->fila, 2 * fi->qtd * sizeof(int));
    if(fi->fila == NULL){
        return 0;
    }
    if(fi->final != fi->qtd - 1){
        if(fi->final-1 < fi->qtd - fi->inicio){
            for(i = fi->qtd, j = 0; j < fi->final; i++, j++){
                fi->fila[i] = fi->fila[j];
            }
            fi->final = fi-> qtd + fi->final;
        }
        else{
            for(i = fi->inicio, j = fi->qtd + fi->inicio; i < fi->qtd; i++, j++){
                fi->fila[j] = fi->fila[i];
            }
            fi->inicio = fi->qtd + fi->inicio;
        }
    }
    fi->qtd *= 2;
    return 1;
}

void reinicia_fila(Fila *fi){
    free(fi->fila);
}


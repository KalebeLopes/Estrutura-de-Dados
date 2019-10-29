#include <stdio.h>
#include <stdlib.h>
#include "VetTamFix.h"   // INCLUI OS PROTÓTIPOS

// DEFIINCAO DO TIPO FILA
struct fila{
    int inicio, final, qtd;
    int f[MAX];
};

Fila *cria_fila(){
    Fila *fi;
    fi = (Fila*) malloc(sizeof(struct fila));

    if(fi != NULL){
        fi -> inicio = 0;
        fi -> final = 0;
        fi -> qtd = 0;
        printf("FILA CRIADA COM SUCESSO!\n");
    }
    return fi;
}

int remove_fila(Fila *fi){
    if(fi == NULL || fi -> qtd == 0){
        printf("Erro: A fila já está vazia!\n");
        return 0;
    }

    fi -> inicio = (fi -> inicio + 1) ;
    fi -> qtd--;
    
    printf("Elemento removido com sucesso!\n");
    
    return 1;

}

int tamanho_fila(Fila *fi){
    if(fi == NULL){
        printf("Erro ao informar o tamanho da fila!\n");
        return -1;
    }
    printf("O tamanho da fila é: \n");
    return fi -> qtd;
}

int fila_cheia(Fila *fi){
    if(fi == NULL){
        printf("Fila inválida!\n");
        return -1;
    }
    if(fi->qtd == MAX){
        printf("A fila está cheia!\n");
        return 1;
    }
    else
        printf("A fila ñao está cheia!\n");
        return 0;
}

int fila_vazia(Fila *fi){
    if(fi == NULL){
        printf("Fila inválida!\n");
        return -1;
    }
    if(fi -> qtd == 0){
        printf("A fila está vazia!\n");
        return 1;
    }
    else 
        printf("A fila ñao está vazia!\n");
        return 0;   
}

int insere_fila(Fila *fi){

    int valor, i = 0;

    if (fi == NULL){
        printf("Fila inválida!\n");
        return 0;
    }

    

    printf("Digite quantos elementos você deseja inserir: \n");
    scanf("%d", &valor);

    while (i != valor){
        if (fi->final != MAX){
            fi->f[fi->final] = i;
            fi->final = (fi->final + 1) ;
            fi->qtd++;    
        }
        else{
            printf("A Fila encheu!\n");
            return 0;
        }

        i++;
    }

    printf("Elemento inserido com sucesso!\n");
    return 1;
}

int imprime_fila(Fila *fi){
    int i = 0;

    if (fi->qtd == 0){
        printf("A fila está vazia!\n");
        return 0;
    }

    while (fi->f[fi->inicio] <= fi->f[MAX]){
        printf("%d ", fi->f[fi->inicio]);
        fi->f[fi->inicio] = fi->f[fi->inicio + 1];
    }
    
}


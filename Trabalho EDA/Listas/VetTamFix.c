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

int remove_fila(Fila *fi){

    int valor, i = 1, x;

    if(fi == NULL || fi -> qtd == 0){
        printf("Erro: A fila já está vazia!\n");
        return 0;
    }

    printf("Digite quantos elementos você deseja remover: \n");
    scanf("%d", &valor);

    while (i <= valor){
        x = fi->inicio;
        ++ fi->inicio;
        -- fi->qtd;
        printf("Elemento removido: %d\n", x--);
        i++;
    }
    
    
    return 1;

}
   

int insere_fila(Fila *fi){

    int valor, x;

    if (fi == NULL){
        printf("Fila inválida!\n");
        return 0;
    }

    printf("Digite quantos elementos você deseja inserir: \n");
    scanf("%d", &valor);

    printf("Digite o valor do elemento: \n");
    while (valor > 0){
        
        scanf("%d", &x);

        if (fi->final < MAX){
            fi->f[fi->final++] = x;
            //fi->f[fi->final]  =  fi->f[fi->final+1]; 
            fi->qtd++;    
            //i++;
            valor--;
        }
        else{
            printf("O elemento  %d  não foi inserido! \n", x);
            return 0;
        }
        
    }

    printf("Elemento inserido com sucesso! ");
    return 1;
}

void reinicia_fila(Fila *fi){
    if(fi != NULL){
        fi -> inicio = 0;
        fi -> final = 0;
        fi -> qtd = 0;
    }
}

int imprime_fila(Fila *fi){
    int i = 0;

    /*if (fi->qtd == 0){
        printf("A fila está vazia!\n");
        return 0;
    }*/
     if(fi == NULL){
        printf("A fila já está vazia!\n");
        return 0;
    }

    i = fi->inicio;
    printf("--------------------------------------------------------\n");
    printf("|");
    
    while (i < MAX){
      
            printf(" %d |", fi->f[i]);
        
        i++;
    }
    printf("\n--------------------------------------------------------\n");
    printf("Inicio elemento: %d\n", fi->inicio);
    printf("Final elemento: %d\n", fi ->final);
    return 1;
    
}


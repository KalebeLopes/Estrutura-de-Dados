#include <stdio.h>
#include <stdlib.h>
#include "FilaEstatica.h"   // INCLUI OS PROTÓTIPOS

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

int insere_fila(Fila *fi, int valor){
    if (fi == NULL){
        printf("Fila inválida!\n");
        return 0;
    }

    if (fi->qtd == MAX){
        printf("Erro ao inserir um novo elemento, a fila já está cheia!\n");
        return 0;
    }

    //scanf("Informe o valor a ser inserito: %d\n", &valor);

    fi->f[fi->final] = valor;
    fi->final = (fi->final + 1) ;
    fi->qtd++;
    printf("Elemento inserido com sucesso!\n");
    return valor;
}

int imprime_fila(Fila *fi){
    return 1;
}


int main(){

    Fila *fi;
    int valor, seletor = 1;
    /*
    printf("--------------------------------------------\n");
    printf("1. Inserir n elementos na fila\n");
    printf("2. Remover n elementos na fila\n");
    printf("3. Imprimir a fila\n");
    printf("4. Reiniciar a fila\n");
    printf("5. Sair\n");
    printf("--------------------------------------------\n");
    */
    while (seletor != 0){
        printf("\nInforme a opcao: \n");
        scanf("%d", &seletor);
        
        switch (seletor){
            case 1 : fi = cria_fila(); break;
            case 2 : printf("%d", insere_fila(fi, valor)); break;
            case 3 : printf("%d", remove_fila(fi)); break;
            case 4 : printf("%d", fila_cheia(fi)); break; 
            case 5 : printf("%d", fila_vazia(fi)); break;
            case 6 : printf("%d", tamanho_fila(fi)); break;
            case 7 : printf("%d", imprime_fila(fi)); break;
            case 0 : break;
        }

    }

}
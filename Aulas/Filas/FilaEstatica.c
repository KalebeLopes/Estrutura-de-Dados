#include <stdio.h>
#include <stdlib.h>
#include "FilaEstatica.h"   // INCLUI OS PROTÓTIPOS

// DEFIINCAO DO TIPO FILA
struct fila{
    int inicio, final, qtd;
    struct aluno dados[MAX];
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

    fi -> inicio = (fi -> inicio + 1) % MAX;
    fi -> qtd--;
    
    printf("Elemento removido com sucesso!\n");
    
    return 1;

}

void libera_fila(Fila *fi){
    free(fi);
    printf("Fila liberada com sucesso!\n");
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

int insere_fila(Fila *fi, struct aluno a1){
    if (fi == NULL){
        printf("Fila inválida!\n");
        return 0;
    }

    if (fi->qtd == MAX){
        printf("Erro ao inserir um novo elemento, a fila já está cheia!\n");
        return 0;
    }

    fi->dados[fi->final] = a1;
    fi->final = (fi->final + 1) %MAX;
    fi->qtd++;
    printf("Elemento inserido com sucesso!\n");
    return 1;
}

/*int remove_fila(Fila *fi){
    if(fi == NULL || fi->qtd == 0)
        return 0;
    
    fi->inicio = (fi->inicio + 1) % MAX;
    fi->qtd--;
    return 1;
}*/

int consulta_fila(Fila *fi, struct aluno *al){
    if(fi == NULL || fi->qtd == 0){
        printf("Erro, fila inválida!\n");
        return 0;
    }
    *al = fi->dados[fi->inicio];

    return 1;   
}


int main(){
    Fila *fi;
    struct aluno al;

    // Criando a fila
    fi = cria_fila();

    // Removendo elemento da fila
    remove_fila(fi);

    // Consultando o tamanho da fila
    tamanho_fila(fi);

    // Verificando se a fila está cheia
    fila_cheia(fi);

    // Verificando se a fila está  vazia
    fila_vazia(fi);

    // Inserindo elemento na fila
    insere_fila(fi, al);

    // Consultando elemento na fila
    consulta_fila(fi, &al);


    return 0;
}
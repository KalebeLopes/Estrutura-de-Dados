#include <stdio.h>
#include <stdlib.h>
#include "FilaCircRed.h"     // INCLUI PROTÓTIPOS

    int *fila;
    int inicio, final, qtd;

void cria_fila(){
    qtd = 5;
    fila = malloc( qtd * sizeof(int));
    inicio = 0;
    final = 0;

}

int insere_fila(int valor){

    int x = 1;

    if(fila_cheia())
        x = redimensiona();

    if(x){
        fila[final++] = valor;
        if(final == qtd){
            final = 0;
        }
    }
    return x;
}

int remove_fila(int *valor){
    if(!fila_vazia()){
        *valor = fila[inicio++];

        if(inicio == qtd)
            inicio = 0;            
        
        return 1;
    }
    return 0;
}

int fila_cheia(){
    return (final + 1) % qtd == inicio;
}

int fila_vazia(){
    return inicio == final;
}

int tamanho_fila(){
    int total = final - inicio;

    if(inicio > final){
        total = qtd + total;
    }

    return total;
}

void imprime_fila(){
    printf("-------------------------------------------------------------\n|");
    for(int i = 0; i < qtd; i++){
        if(fila[i] == 0){
            printf(" xxx |");
        }
        else{
            printf("  %d  |", fila[i]);
        }
    }
    printf("\n-------------------------------------------------------------\n");
    if(inicio == 0 && final == 0){
        printf("p  u\n");
    }
    else{
        for(int i = 0; i < qtd; i++){
            if(fila[i] != 0){
                printf(" primeiro ");
                break;
            }
            else{
                printf("    ");
            }
        }
        for(int i = 0; i < qtd; i++){
            if(fila[i] != 0 && fila[i+1] == 0){
                printf("  u  \n");
                break;
            }
                else{
                printf("     \n");
            }
        }
    }
}

int redimensiona(){
    int i, j;
    fila = realloc(fila, 2 * qtd * sizeof(int));
    if(fila == NULL){
        return 0;
    }
    if(final != qtd - 1){
        if(final-1 < qtd - inicio){
            for(i = qtd, j = 0; j < final; i++, j++){
                fila[i] = fila[j];
            }
            final = qtd + final;
        }
        else{
            for(i = inicio, j = qtd + inicio; i <qtd; i++, j++){
                fila[j] = fila[i];
            }
            inicio = qtd + inicio;
        }
    }
    qtd *= 2;
    return 1;
}

void libera(){
    free(fila);
}


int main(){
    int  y = 2;

    cria_fila();    
    insere_fila(y); 
    insere_fila(y);
    insere_fila(y);
    insere_fila(y);
    

    imprime_fila();

    return 1;
}
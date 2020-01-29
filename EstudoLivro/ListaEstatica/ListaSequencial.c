#include <stdio.h>
#include <stdlib.h>
#include "ListaSequencial.h"

struct lista{
    int qtd;
    struct aluno dados[MAX];
};

Lista *cria_lista(){
    Lista *li;
    li = (Lista*) malloc (sizeof(Lista*));

    if(li == NULL){
        printf("ERRO AO CRIAR A LISTA\n");
        return 0;
    }
    else {
        printf("LISTA CRIADA COM SUCESSO!\n");
    }

    li->qtd = 0;

    return li;
} 

void libera_lista(Lista *li){
    if (li != NULL){
        printf("FILA LIBERADA COM SUCESSO!\n");
        free(li);
    }
    else {
        printf("A FILA NAO EXISTE\n");
    }
}

int insere_lista_inicio(Lista *li, struct aluno al){
    if (li == NULL){
        printf("ERRO AO INSERIR ELEMENTO\n");
        return 0;
    }
    
    if (li->qtd > 0){
        for (int i = li->qtd; i > 0; i--)
            li->dados[i] = li->dados[i-1];
        
        li->dados[0] = al;
    }
    else if (li->qtd = 0){
        li->dados[0] = al;
    }
    
    printf("ELEMENTO INSERIDO NO INICIO DA LISTA COM SUCESSO!\n");
    li->qtd++;
    return 1;

}

// int busca_lista_pos(Lista *li, int pos, struct aluno *al){

// }

int main(){
    Lista *li;
    struct aluno a1, a2, a3;

    a1.matricula = 1000; a1.n1 = 6; a1.n2 = 7; a1.n3 = 8;
    a2.matricula = 1001; a2.n1 = 4; a2.n2 = 3; a2.n3 = 7;
    a3.matricula = 1002; a3.n1 = 1; a3.n2 = 2; a3.n3 = 3;

    li = cria_lista();  // CRIACAO DA LISTA
    //libera_lista(li);   // LIBERANDO A LISTA
    insere_lista_inicio(li, a1);    // INSERINDO NO INICIO DA LISTA
    insere_lista_inicio(li, a2);
    insere_lista_inicio(li, a3);

    printf("\nELEMENTOS DA LISTA:\n");
    for (int i = 0; i < li->qtd; i++){
        printf("Elemento %d - Matrícula: %d  Nota 1: %.2f  Nota 2: %.2f  Nota 3: %.2f\n", i+1, li->dados[i].matricula, li->dados[i].n1, li->dados[i].n2, li->dados[i].n3);
    }

    return 0;
}
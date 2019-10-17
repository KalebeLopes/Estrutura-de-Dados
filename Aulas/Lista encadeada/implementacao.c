#include <stdio.h>
#include<stdlib.h>

struct no{
    int valor;
    struct no *link;
};

void mostrar(struct no *p){
    printf("Mostrando a lista:\n");

    if(p){
        do{
            printf("%d\n", p ->valor);
            p = p->link;
        }
        while(p); 
    }

    else
        printf("Lista vazia");

}

int main(){
    struct no *no1 = NULL;
    struct no *no2 = NULL;
    struct no *no3= NULL;

    // CRIANDO NÓS E ASSOCIANDO DADOS
    no1 = (struct no*) malloc(sizeof(struct no*));
    no1 -> valor = 10;

    no2 = (struct no*) malloc(sizeof(struct no*));
    no2 -> valor  = 20;

    // CONECTANDO OS NÓS
    no1->link = no2;
    no2->link = NULL;

    if(no1)
        mostrar(no1);  

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

    typedef struct no {
        int coluna;
        int valor;
        struct no *prox;
    } no;

    typedef no *ponteiro;

    typedef struct matriz{
        int linhas;
        int colunas;
        ponteiro *valores;
    } matriz;


    void inicializa(int linhas, int colunas, matriz *m){

        int i;
        m->linhas = linhas;
        m->colunas = colunas;
        m->valores = (ponteiro*) malloc(linhas*sizeof(ponteiro));
        for (i=0;i<linhas;i++){
             m->valores[i] = NULL;
        }
        
        /*printf("criada");
        m -> linhas = linhas;
        printf("criada");
        m -> colunas = colunas;
        m -> valores = malloc(linhas * sizeof(no *));
        
        for (int i = 0; i < linhas; i ++){
            m -> valores[i] = malloc(sizeof(no));
            m -> valores[i] -> prox = NULL;
        }*/

        printf("criada");
        
    }

   


int main(){

    int m, n, v[n], i;
    int linha = 1, coluna = 1, valor;
    
    matriz *mtz;

    scanf("%d", &m);
    scanf("%d", &n);
   

    inicializa(m, n, mtz);


    return 0;

}
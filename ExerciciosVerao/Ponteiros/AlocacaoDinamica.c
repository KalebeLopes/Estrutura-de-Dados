#include <stdio.h>
#include <stdlib.h>

int *aloca_vetor(int n){
    int *v;

    v = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++){
        *(v+i) = i;
    }
    
    return v;
}

int main(){

    // void *malloc ();    -> Aloca bloco de 'tamanho' bytes consecutivos na memória e devolve um ponteiro p a primeira posicao
    // void *calloc();      -> Aloca posicoes inicializadas com 0;
    // void *realloc();     -> Realoca um vetor apontado por um ponteiro para 'tamanho' bytes
    
    int n = 5, *ptr;

    ptr = aloca_vetor(n);

    printf("%d\n", *(ptr + 4));

    free(ptr);
    
    return 0;
}
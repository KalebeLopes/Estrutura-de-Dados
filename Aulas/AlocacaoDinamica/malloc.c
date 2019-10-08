#include <stdio.h>
#include <stdlib.h>

int main(){

    int *p;

    p = (int *) malloc(sizeof(int)); // p recebe o endereco do vetor alocado

    if (p == NULL){
        printf("Erro: sem memória!\n");
        exit(1);
    }

    int i;
    for (i=0; i<5; i++) {
        printf("Digite p[%d]: ", i);
        scanf("%d", &p[i]); 
    }

    for (i=0; i<5; i++) {
        printf("V: %d \n", p[i]);
    }
    

    return 0;
}
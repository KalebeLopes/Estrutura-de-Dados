#include <stdio.h>

int main(){

    int tamanho, i, vetor1[99999], vetor2[99999], soma[99999];

    scanf("%d", &tamanho);

    for (i = 0 ; i < tamanho ; i++){
        scanf("%d", &vetor1[i]);
    }

    for (i = 0 ; i < tamanho ; i++){
        scanf("%d", &vetor2[i]);
    }

    for (i = 0 ; i < tamanho ; i++){
        soma[i] += vetor1[i] + vetor2[i];
    }

    for (i = 0 ; i < tamanho ; i++){
        if (i == tamanho - 1){
            printf("%d", soma[i]);
            break;
        }
        printf("%d ", soma[i]);
    }
    printf("\n");

    return 0;
}
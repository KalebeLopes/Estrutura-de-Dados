#include <stdio.h>
#include <stdlib.h>

int main(){

    // Um uso prático é a alocacao dinamica de memoria para matrizes

    int **matriz;
    int i, linha, coluna;

    scanf("%d %d", &linha, &coluna);
    matriz = malloc (linha * sizeof(int *));
    for  (i = 0; i < linha; i++){
        matriz[i] = malloc (coluna * sizeof (int));
    }

    for (int i = 0; i < linha; i++){
        free (matriz[i]);
    }
    free (matriz);

    return 0;
}
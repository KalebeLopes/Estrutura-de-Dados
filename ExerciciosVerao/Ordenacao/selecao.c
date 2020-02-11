#include <stdio.h>

void selecao_rec(int *v, int n, int i){     // i = 0
    if (i <= n-1){  // i EQUIVALE A MINHA POSICAO NO VETOR
        int m = i;

        for (int j = i+1; j < n; j++){
            if (v[j] < v[m])
                m = j;
        }

        int aux = v[i];
        v[i] = v[m];
        v[m] = aux;
    
        selecao_rec(v, n, i+1);
    }
}

void selecao(int *v, int n){
    for (int i=0; i<n-1; i++){
        int m = i; // PEGANDO O INDICE
        for (int j=i+1; j<n; j++){
            if (v[j] < v[m])
                m = j; // PEGANDO O INDICE
        }

        int aux = v[i];
        v[i] = v[m];
        v[m] = aux;
    }
}

int main(){

    int v[] = {-4, 2, 1, -5, 10, 3};

    selecao_rec(v, 6, 0);

    for (int i = 0; i < 6; i++)
        printf("%d ", v[i]);
    
    printf("\n");

    return 0;

}
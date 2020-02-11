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
        int m = i, valor = v[i]; // PEGANDO O INDICE
        for (int j=i+1; j<n; j++){
            if (v[j] < v[m]){
                m = j; // PEGANDO O INDICE
                valor = v[j];
            }
        }

        for (int k=m; k>i; k--){
            v[k] = v[k-1];
        }

        v[i] = valor;
    }
}

int main(){

    int v[] = {4, 3, 4, 1, 5};

    selecao(v, 5);

    for (int i = 0; i < 5; i++)
        printf("%d ", v[i]);
    
    printf("\n");

    return 0;

}
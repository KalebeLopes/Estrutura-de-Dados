#include <stdio.h>

void insercao(int *v, int n){

    for (int i = 1; i < n; i++){
        for (int j = i; j > 0 && v[j] < v[j-1]; j--){
            int aux;
            aux = v[j];
            v[j] = v[j-1];
            v[j-1] = aux;
        }
    }

}

void insercao_recursiva(int *v, int n, int i){
    
    if (i != 0){
        insercao_recursiva(v, n, i-1);

        for(int j = i; j > 0 && v[j] < v[j-1]; j--){
            int aux = v[j];
            v[j] = v[j-1];
            v[j-1] = aux;
        }
    }
}

int main(){

    int v[] = {11,4,1,2,7,5,112, 33};

    insercao_recursiva(v, 8, 7); // PASSAR O TAMANHO DO VETOR - 1 PARA i

    for (int i = 0; i < 8; i++)
        printf("%d ", v[i]);
    printf("\n");

    return 0;
}
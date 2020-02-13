#include <stdio.h>

void ordena1 (int *v, int j){       // ATENTAR PARA O VALOR DE F NA CHAMADA RECURSIVA
    if (j > 1){
        if (v[j-1] < v[j-2]){
            int aux = v[j-1];
            v[j-1] = v[j-2];
            v[j-2] = aux;
        }
        ordena1 (v, j-1);
    }
}

void ordena (int *v, int n){
    if (n > 0){
        ordena(v, n-1);
        ordena1(v, n);
    }
    
}

int main(){

    int qtd = 6;
    int v[] = {7,3,2,5,4,3};

    ordena(v, qtd); // tem q ser o tam do vet -1, se n a funçao rec ordena1 o valor 6 na ultima chamada.

    for (int i = 0; i < qtd; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
    //printf("%d\n", v[6]);

    return 0;
}
#include <stdio.h>

void ordena(int *v, int tam){

    for (int i = 1; i < tam; i++){
        for (int j = i; j > 0; j--){
            if (v[j] < v[j-1]){
                int aux = v[j];
                v[j] = v[j-1];
                v[j-1] = aux;
            }
        }
    }

}

int main(){

    int num, i = 0;
    int vetor[10000];

    while (scanf("%d", &num) != EOF){
        vetor[i] = num;
        i++;
    }

    ordena(vetor, i);

    int f;
    for (f = 0; f < i-1; f++){
        printf("%d ", vetor[f]);
    }

    printf("%d\n", vetor[f]);

    return 0;
}
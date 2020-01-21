#include <stdio.h>

int main(){

    int qtd, i = 0, p = 0, k, j, z = 0;

    scanf("%d", &qtd);

    long int numeros, vet[10000];

    if (qtd >= 5 && qtd <= 10000){
        while(qtd > 0){
            scanf("%ld", &vet[p]);
            p ++;
            qtd --;
        }

        for (j=0;j<p;j++){
            if (vet[j] % 2 == 0 && z == 0){
                printf("%ld", vet[j]);
                z++;
            }

            else{
                if (vet[j] % 2 == 0){
                    printf(" %ld", vet[j]);
                }
            }
            
        }
        
        printf("\n");

        z = 0;
        
        for (j=0 ; j<p ; j++){
            if (vet[j] % 2 != 0 && z == 0){
                printf("%ld", vet[j]);
                z ++;
            }
            else {
                if (vet[j] % 2 != 0){
                    printf(" %ld", vet[j]);
                }
            }
            
        }
        printf("\n");
    }

    return 0;
}
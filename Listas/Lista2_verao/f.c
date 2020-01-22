#include <stdio.h>

int main(){

    long long int qtd, sequencia[99999], i, media = 0, maior[99999], j = 0;

    scanf("%lld", &qtd);

    if (qtd >= 1 && qtd <= 10000){

    for (i = 0 ; i < qtd ; i++){
        scanf("%lld", &sequencia[i]);

        if (sequencia[i] >= 0 && sequencia[i] <= 1000000){
            media += sequencia[i];
        }
        else {
            return 0;
        }
        
    }
    
    media /= qtd;
    printf("%lld \n", media);
    
    for (i = 0 ; i < qtd ; i++){
        if (sequencia[i] > media){
            maior[j] = sequencia[i];
            j++;
        }
    }

    if (j == 0){
        printf("0\n");
        return 0;
    }

    for (i = 0 ; i < j ; i++){
        if (i == j - 1){
            printf("%lld\n", maior[i]);
            return 0;
        }
        printf("%lld ", maior[i]);
        
    } 

    //printf("\n");
    

    return 0;
    }
    
}
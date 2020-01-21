#include <stdio.h>

int main(){
    long int entrada, vetor[999999], contido, i, count = 0;

    scanf("%ld", &entrada);

    for (i = 0 ; i < entrada ; i++){
        scanf("%ld", &vetor[i]);
    }

    scanf("%ld", &contido);

    for (i = 0 ; i < entrada ; i++){
        if (contido == vetor[i]){
            count++;
        }
    }

    if (count > 0){
        printf("pertence\n");
    }

    else {
        printf("nao pertence\n");
    }

    
    
    return 0;
}
#include <stdio.h>

// int maiorNum(int atual, int maior){

//     if (atual >= maior){
//         maior = atual;
//     }

//     return maior;
// }

int main(){

    int input, maior = 0;

    while(scanf("%d", &input) != EOF){
        if (input >= maior){
            maior = input;
        }
    }

    printf("%d\n", maior);

    return 0;
}
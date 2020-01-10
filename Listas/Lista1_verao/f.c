#include <stdio.h>

int main(){

    int input, i, j, k, f;

    scanf("%d", &input);

    if (input >= 1 && input <= 1000000){
        for (i = 1 ; i <= input ; i++){
            for (f = 0 ; f < input - i; f ++){
                printf(" ");
            }

            for (k = 1 ; k < input - f ; k++){
                printf("*");
            }
            
            for (j = 0; j < i; j++){
                printf("*");
            }
        
        printf("\n");

        }

        
        
    }

    return 0;
}
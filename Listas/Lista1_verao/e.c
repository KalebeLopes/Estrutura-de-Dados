#include <stdio.h>

int main(){

    int input;

    scanf("%d", &input);

    if (input >= 1 && input < 100){
        for (int i=1 ; i <= input ; i++){
            printf("%.2d", i);

            for (int j = 0; j < i -1 ; j++){
                printf(" %.2d", i);
            }

            printf("\n");

        }

        printf("\n");

        for (int i = 1 ; i <= input ; i++){
            printf("01");
            for (int j = 2; j <= i; j++){
                printf(" %.2d", j);
            }

            printf("\n");
            
        }

    }

    

    return 0;
}
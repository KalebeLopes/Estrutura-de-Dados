#include <stdio.h>
int main(){

    int i, n, j;

    scanf("%d", &n);

    for (i = 1; i <= n; i++){
        printf("%02d", i);

        for ( j = 0; j < i-1; j++){
            printf(" %02d", i);
        }
        printf("\n");
        
    }
    printf("\n");
    for (i = 1; i <= n; i++){
        printf("01");

        for ( j = 1; j < i; j++){
            printf(" %02d", j+1);
        }
        printf("\n");
        
    }
    

    return 0;
}
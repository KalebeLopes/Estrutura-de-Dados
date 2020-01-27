#include <stdio.h>

int f91(int n){
    if (n >= 101){
        return n - 10;
    }
    else{
        return f91(f91(n+11));
    }
}

int main(){

    int entrada;

    scanf("%d", &entrada);
    while (entrada != 0){
        printf("f91(%d) = %d\n", entrada, f91(entrada));
        scanf("%d", &entrada);
    }

    return 0;
}
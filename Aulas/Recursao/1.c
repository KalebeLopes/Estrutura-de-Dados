
#include <stdio.h>

int maximo (int n, int v[]){

    if (n == 1){
        return v[0];
    }

    else {
        int x;
        x = maximo (n-1, v);
        // x é o máximo de v[0..n-2] 
        if (x > v[n-1]) {   
            return x;
        }

        else return v[n-1]; 
    }
}

int main(){

    int v[4] = {1,2,3,4};
    int y;
    
    y = maximo(4, v);
    printf("%d\n: ", y);

return 0;
}
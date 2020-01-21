#include <stdio.h>

int encaixa(int a, int b){
    int i = 0, j = 0, na[1000], nb[1000], auxa = 0, auxb = 0, x = 0, y = 0, z = 0;

    while (a>0){
        na[i] = a%10; 
        a = a/10;
        i++;
    }

    while (b>0){
        nb[j] = b%10; 
        b = b/10;
        j++;
    }

    i = i - 1;
    j = j - 1;

    //printf("%d\n",i);

    // while (i>=0){
    //     printf("%d", na[i]);
    //     i--;
    // }

    // printf("\n");

    x = 0;

    // while (x<j){
    //     printf("%d", nb[y]);
    //     x--;
    // }

    //  printf("\n");

    //  printf("%d %d\n", i, j);


    // printf("%d, %d\n", i, j);

    if (i > j){
        //auxa = i-j;
        while (x <= j){
            //if (x == i-j){
                //y = x+1;

                //while(y <= i){
                    // printf("%d, %d\n", na[x], nb[x]);
                    if (na[x] != nb[x]){ 
                        // printf("%d, %d\n", na[x], nb[x]);
                        return 0;            
                    }
                    // y ++;
                    // z++;
                //}
                
            //}
                
        x ++;

        //}
        // printf("11\n");
        return 1;
    }
    
    }
    else if (i == j){
        while (i >= 0){
            if (na[i] != nb[j]){
                return 0;
                //printf("%d\n", 0);
            }
        i --;
        j --;

        }

        //printf("%d\n", 1);
        return 1;
    }

    return 0;
}

// int main(){
//     printf("%d\n", encaixa(457,45));

//     return 0;
// }


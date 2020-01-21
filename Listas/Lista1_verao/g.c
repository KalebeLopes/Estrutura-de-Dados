#include <stdio.h>
// IMPRIME O PAR E GUARDA O IMPAR  - LISTA 2
int main(){

    int a = 0, cpf[11], k = 0;
    char cp[11];
    long long int i = 10, soma = 0, d1 = 0, d2 = 0;

    scanf("%s", cp);
    //printf("%d\n", (int)cp[1]);

    for (i = 0 ; i < 11; i++){
        if (cp[i] == 48){
            cpf[i] = 0;
        }
        if (cp[i] == 49){
            cpf[i] = 1;
        }
        if (cp[i] == 50){
            cpf[i] = 2;
        }
        if (cp[i] == 51){
            cpf[i] = 3;
        }
        if (cp[i] == 52){
            cpf[i] = 4;
        }
        if (cp[i] == 53){
            cpf[i] = 5;
        }
        if (cp[i] == 54){
            cpf[i] = 6;
        }
        if (cp[i] == 55){
            cpf[i] = 7;
        }
        if (cp[i] == 56){
            cpf[i] = 8;
        }
        if (cp[i] == 57){
            cpf[i] = 9;
        }
        // cpf[i] = (int)cp[i];
        //printf("%d", (int)cp[i]);
    }

    for (i = 0, k = 10 ; i < 9 ; i++, k--){
        d1 += cpf[i] * k;
    }

    for (i = 0, k = 11 ; i < 10 ; i++, k--){
        d2 += cpf[i] * k;
    }

    // for (i = 0 ; i < 11 ; i++){ 
    //     printf("%d", cpf[i]);
    // }


    // while (a > 0){
    //     printf("%lld", cpf[i] = a%10); 
    //     a = a/10; 
    //     i--;    
    // }

    // 06036649118

    // for (int j = 0, k = 10; j < 9; j++, k--){
    //     if (cpf[j] > 9 || cpf[j] < 0){  
    //         cpf[j] = 0;
    //     }
    //     d1 += cpf[j] * k;
    // }

    // for (int j = 0, k = 11; j < 10; j++, k--){
    //     if (cpf[j] > 9 || cpf[j] < 0){
    //         cpf[j] = 0;
    //     }
    //     d2 += cpf[j] * k;
    // }


    d1 %= 11;
    d2 %= 11;

    // for (i = 0 ; i < 11 ; i++){
    //     printf("%lld", cpf[i]);
    // }

    // printf("%d\n", 11- d1);
    // printf("%d\n", 11 - d2); 

    // 12345678909
    // 89370443079
    
    if (11 - d1 > 9){
        d1 = 0;
    }
    else 
        d1 = 11 - d1;

    if (11 - d2 > 9){
        d2 = 0;
    }
    else    
        d2 = 11 - d2;

    if (d1 != cpf[9]){
        printf("invalido\n");
    }

    else{
        if (d2 != cpf[10]){
            printf("invalido\n");
        }
        
        else {
            printf("valido\n");
        }

    }
    
    return 0;
}
#include <stdio.h>
int main(){
    int qtd;
    int valor = 7;
    int i;

    scanf("%d", &qtd);

    if  (qtd >= 11){
        for (i = 11 ; i <= qtd ; i++){
            if (i > 30){
                break;
            }
            else{
                valor +=  1;
            }
        }
    }

    if  (qtd >= 31){
        for (i = 31 ; i <= qtd ; i++){
            if (i > 100){
                break;
            }
            else{
                valor +=  2;
            }
        }
    }

    if  (qtd >= 101){
        for (i = 101 ; i <= qtd ; i++){
                valor +=  5;
        }
    }
    printf("%d\n", valor);
    
    return 0;
}
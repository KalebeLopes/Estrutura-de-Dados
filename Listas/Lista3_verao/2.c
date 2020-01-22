#include <stdio.h>

int soma(long int input){
    //int total = 0;

    if (input == 0)
        return 0;

    else{
        return soma(input / 10) + input % 10;
    }
    
}

int main(){
    long int input;

    scanf("%ld", &input);
    printf("%d\n", soma(input));

    return 0;
}
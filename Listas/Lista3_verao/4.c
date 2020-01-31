#include <stdio.h>

int grau9(int soma){
    if (soma < 10)
        return 0;

    else{
        soma = soma-digitos(soma);
        return grau9(soma)+1;
    }
}

int main(){

    char num[1001];
    int soma;

    scanf("%s", num);

    for (int i = 0, soma = 0; num[i] != '\0'; i++){
        soma += num[i] - '0';
    }

    if (soma % 9 == 0){
        printf(" %d\n", grau9(soma) + 1);
    }
    else
        printf("%d is not...");

    return 0;
}
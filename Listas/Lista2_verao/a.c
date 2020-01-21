#include <stdio.h>

int main(){

    int capacidade, qtdAlunos, aux = 0;

    scanf("%d", &capacidade);

    if (capacidade >= 2 && capacidade <= 100){
        scanf("%d", &qtdAlunos);

        if (qtdAlunos >= 1 && qtdAlunos <= 1000){
            
            //aux = capacidade - 1;

            while (qtdAlunos > 0){
                qtdAlunos -= (capacidade - 1); 
                aux += 1;
            }

        }

    }

    printf("%d\n", aux);

    return 0;
}
#include <stdio.h>
#include "VetTamFix.c"

int main(){

    Fila *fi;
    int seletor = 1;

    fi = cria_fila();

    
    printf("--------------------------------------------\n");
    printf("1. Inserir n elementos na fila\n");
    printf("2. Remover n elementos na fila\n");
    printf("3. Imprimir a fila\n");
    printf("4. Reiniciar a fila\n");
    printf("5. Sair\n");
    printf("--------------------------------------------\n");
    
    
    while (seletor != 0){
        printf("\nInforme a opcao: \n");
        scanf("%d", &seletor);
        
        switch (seletor){
            case 1 : printf("%d", insere_fila(fi));
                printf("Inicio: %d\n", fi -> f[fi-> inicio]);
                printf("Final: %d\n", fi -> f[fi -> final]);
                break;
            case 2 : printf("%d", remove_fila(fi));
                printf("Inicio: %d\n", fi -> f[fi-> inicio]);
                printf("Final: %d\n", fi -> f[fi -> final]);
                break;
            case 3 : imprime_fila(fi); break; 
            case 4 : printf("%d", fila_vazia(fi)); break;
            case 5 : printf("%d", tamanho_fila(fi)); break;
            case 6 : printf("%d", imprime_fila(fi)); break;
            case 0 : break;
        }
    }

}
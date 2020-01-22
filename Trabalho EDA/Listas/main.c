#include <stdio.h>
#include "VetTamFix.c"

int main(){

    Fila *fi;
    int seletor = 1;
    int qtd = 1;

    fi = cria_fila();

    int x = 0;
    while (seletor != 5){
        printf("\n");
        printf("\n");
        printf("\n");
        printf("--------------------------------------------\n");
        printf("1. Inserir n elementos na fila\n");
        printf("2. Remover n elementos na fila\n");
        printf("3. Imprimir a fila\n");
        printf("4. Reiniciar a fila\n");
        printf("5. Sair\n");
        printf("--------------------------------------------\n");

        printf("\nInforme a opcao: \n");
        scanf("%d", &seletor);
        
        switch (seletor){
            case 1 : insere_fila(fi);break;
            case 2 : remove_fila(fi);break;
            case 3 : imprime_fila(fi); break; 
            case 4 : reinicia_fila(fi); break;
            case 5 : break;
        }
    }

}
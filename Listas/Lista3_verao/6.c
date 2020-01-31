#include <stdio.h>
#include <string.h>

int par(int qt, char *nome){
    if (qt <= 2){
        return 0;
    }
    
    else{
        if (nome[qt-1] == nome[qt-3]){
            return par(qt-1, nome) + 1;
        }
        else {
            return 0;
        }    
    }
}

int main(){

    char nome[200];
    int qtd;

    scanf("%s", nome);
    qtd = (int)strlen(nome);
    
    // nome_contrario(nome, qtd);
    printf("%d\n", par(qtd, nome));

    return 0;
}
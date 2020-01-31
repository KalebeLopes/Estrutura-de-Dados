#include <stdio.h>
#include <string.h>

// int valor = 0;

int par(int qt, char *nome){
    if (qt <= 2){
        return 0;
    }
    
    else{
        if (nome[qt-3] == nome[qt-1]){
            //valor++;
            return 1 + par(qt-1, nome);
        }  
        else{
            return 0 + par(qt-1, nome);
        }
    }
}

int main(){

    char nome[209];
    int qtd;

    scanf("%s", nome);
    qtd = (int)strlen(nome);
    
    // nome_contrario(nome, qtd);
    
    printf("%d\n", par(qtd, nome));

    return 0;
}

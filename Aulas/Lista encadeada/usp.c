#include <stdio.h>

struct reg {
    int conteudo;
    struct reg *prox;
};

typedef struct reg celula; // NOVO NOME PARA A CELULA

int main(){

    celula c;       // DECLARACO DE UMA CELULA
    celula *p;     // DECLARACAO DE UM PONTEIRO PARA UMA CELULA

    c.conteudo;       // CONTEUDO DE UMA CELULA
    p -> conteudo;  // CONTEUDO DE UM PONTEIRO Q APONTA PRA UMA CELULA

    printf("sizeof (celula) = %d\n", sizeof(celula));   // TAMANHO DA CELULA

    return 0;
}
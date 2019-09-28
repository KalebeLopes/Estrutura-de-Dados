#include <stdio.h>
#include <stdlib.h>
/*ALOCACAO DINAMICA DE MEMÓRIA    
    É ALOCAR UM ESPACO DE MEMORIA EM TEMPO DE EXECUCAO DO PROGRAMA
    EXISTEM 3 FUNCOES DE ALOCACAO DINAMICA EM C:
        1- void *malloc(size_t tamanho);
        2- void *calloc(size_t nmemb, size_t tamanho_tipo);
        3- void realloc(void *ptr, size_t tamanho);
*/

int main(){
    int *ptr;

    ptr = malloc(4);
    scanf ("%c", ptr);

return 0;        
}

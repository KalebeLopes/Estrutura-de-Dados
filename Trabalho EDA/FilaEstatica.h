#define MAX 5

typedef struct fila Fila;

Fila *cria_fila();
void libera_fila(Fila *f1);
int consulta_fila(Fila *f1, int *valor);
int insere_fila(Fila *fi, int valor); 
int remove_fila(Fila *fi);
int tamanho_fila(Fila *fi);
int fila_vazia(Fila *fi);
int fila_cheia(Fila *fi);
int imprime_fila(Fila *fi);

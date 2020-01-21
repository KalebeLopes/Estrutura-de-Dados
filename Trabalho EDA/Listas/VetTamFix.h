#define MAX 5

typedef struct fila Fila;

Fila *cria_fila();
int insere_fila(Fila *fi); 
int remove_fila(Fila *fi);
int fila_cheia(Fila *fi);
int fila_vazia(Fila *fi);
int tamanho_fila(Fila *fi);
int imprime_fila(Fila *fi);
void reinicia_fila(Fila *fi);

void libera_fila(Fila *f1);
int consulta_fila(Fila *f1, int *valor);







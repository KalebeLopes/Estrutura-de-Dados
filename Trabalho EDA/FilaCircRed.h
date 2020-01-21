//typedef struct fila Fila;
typedef struct fila Fila;

Fila *cria_fila();
int insere_fila(Fila *fi); 
int remove_fila(Fila *fi);
int fila_cheia(Fila *fi);
int fila_vazia(Fila *fi);
int tamanho_fila(Fila *fi);
void imprime_fila(Fila *fi);
int redimensiona(Fila *fi);
void reinicia_fila(Fila *fi);

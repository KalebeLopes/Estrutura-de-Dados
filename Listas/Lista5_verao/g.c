#include <stdio.h>
#include <stdlib.h>

typedef struct fila {
    int *dados;
    int N, p, u;
} fila;

int enfileira (fila *f, int x){
    
    if ((f->p == 0 && f->u == f->N - 1) || (f->p > 0 && f->u == f->p - 1)) {
        if (f->p == 0 && f->u == f->N - 1){
            //printf("realoquei\n");
            f->N *= 2;
            f->dados = realloc(f->dados, f->N * sizeof(int));
            
            if (f->dados == NULL)
                return 0;
            
            // f->dados[f->u] == x;
            // f->u++;

            // return 1;
        }
        
        else if (f->p > 0 && f->u == f->p - 1){
            if (f->u <= f->N - f->p){
                //printf("realoquei 1 caso\n");
                int aux = f->N;
                f->N *= 2; 
                f->dados = realloc(f->dados, f->N * sizeof(int));

                if (f->dados == NULL)
                    return 0;
                
                for (int i = 0; i < f->u; i++, aux ++){
                    f->dados[aux] = f->dados[i];
                    //aux++;
                }

                f->u = aux;
                
            }

            else if (f->u > f->N - f->p){
                //printf("realoquei 2 caso\n");
                int aux1 = f->N;
                f->N *= 2; 
                f->dados = realloc(f->dados, f->N * sizeof(int));

                if (f->dados == NULL)
                    return 0;
                    
                int aux2 = f->N-1;
                for (int i = aux1-1; i > f->u; i--, aux2--){
                    f->dados[aux2] = f->dados[i];
                }

                f->p = aux2+1;
            }
        }
    }
    //printf("%d\n", f->u);

    f->dados[f->u] = x;
    f->u++;

    if (f->u == f->N)
        f->u %= f->N; 

    //printf("%d\n", f->u);
    // printf("%d\n", f->p);
    // printf("%d\n", f->u);
    return 1;
}

// int main(){

//     fila *f;

//     f = malloc(sizeof(fila));

//     f->N = 5;
//     f->dados = malloc(f->N * sizeof(int));
//     if (f->dados == NULL)
//         return 0;
//     //f->p = f->u = 0;
//     f->p = f->u = 2;

//     enfileira(f, 1);
//     enfileira(f, 2);
//     enfileira(f, 3);
//     enfileira(f, 4);
//     enfileira(f, 5);
    
//     if (f->p <= f->u){
//         for (int i = f->p; i < f->u; i++)
//             printf("%d ", f->dados[i]);
//         printf("\n");
//     }

    
//     if (f->p > f->u){
//         int i = f->p % f->N;;

//         while (i != f->u){

//             i = i% f->N;
//             printf("%d ",  f->dados[i]);    
//             i++;
            
//         }

//         printf("\n");
//     }

//     return 0;
// }
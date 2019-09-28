#include <stdio.h>
#include <math.h>

// FUNCAO RETORNANDO VÁRIOS VALORES

    int calcula(double n, double *quadrado, double *raiz){
        *quadrado = n*n;
        *raiz = sqrt (n);

        return 0;
    }

    int main(){
        double n, quadrado, raiz;

        scanf("%lf", &n);
        calcula(n, &quadrado, &raiz);
        printf("Quadrado = %lf\nRaiz = %lf\n", quadrado, raiz);

    return 0;        
    }

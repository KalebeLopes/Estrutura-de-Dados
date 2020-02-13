#include <stdio.h>
#include <stdlib.h>

int busca_binaria(int *v, int n, int x){        // É BEM MAIS EFICIENTE Q A BUSCA LINEAR
    int e = -1;
    int d = n;
    int m;

    while(e < d-1){
        m = (e+d)/2;
        if(v[m] < x)
            e = m;
        else 
            d = m;
    }
    return d;
}

int main(){
    
    int n, m, *v, verificar;

    scanf("%d%d", &n, &m);
    v = malloc(n * sizeof(int));
    
    for (int i = 0; i < n; i++){
        scanf("%d", &v[i]);    
    }

    for (int i = 0; i < m; i++){
        scanf("%d", &verificar);
        printf("%d\n", busca_binaria(v, n, verificar));


        // int j;
        // for (j = n; j > 0 && v[j-1] >= verificar; j--);
        //     printf("%d\n", j);
    }
    

    return 0;
}
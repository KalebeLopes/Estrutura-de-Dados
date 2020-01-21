#include <stdio.h>
int main(){

    int d, m, a, d1, m1, a1, sd, sm, sa;

    scanf("%d%d%d", &d, &m, &a);
    scanf("%d%d%d", &d1, &m1, &a1);

    sa = (a1 - a);
    sm = m1 - (m%15);
    sd = d1 - (d%35);
    
    printf("%d \n", sa);
    printf("%d \n", sm);
    printf("%d \n", sd);
    return 0;
}
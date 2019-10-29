#include <stdio.h>

double velMed(int ta, int tb, double distancia){

    double h;
    double vm;

    h = (tb - ta) / 3600.0;
    vm = distancia / h;
    
    return vm;
}

int levouMulta(int ta, int tb, double distancia, double vmax){

    double vm;

    //vm = velMed(ta, tb, distancia);

    //printf("%lf\n", vm);

    if (vm > vmax)
        return 1;

    else
        return 0;
    

}

int main(){

    //double vmed;
    //int multa;

    //vmed = velMed(61200,63000,60.0);
    //printf("%.1lf\n", vmed);

    //multa = levouMulta(61200,63000,60.0,120.0);
    //printf("%d\n", multa);


    return 0;
}
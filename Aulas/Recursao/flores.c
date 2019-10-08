
#include <stdio.h>

void esvaziarVaso (int flores){

    if (flores > 0){

        // REMOVE UMA FLOR
        esvaziarVaso(flores - 1);
        

    }


}

int main(){

   int x = 10;

   esvaziarVaso(10);

return 0;
}
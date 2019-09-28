#include <stdio.h>

int main() {

    for (int x = 9; x > 0; x--) {
        
        for(int y = 9 - x; y > 0; y--) {
            printf("*");
        }
        for (int y = 1; y <= x * 2 - 1; y++) {
            printf(" ");
        }
        printf("\n");
    }

    return 0;

}
#include <stdio.h>

/*

    int resultado = 5 + 3 * 2 > 10 && 4 == 4 || 0;

    = 5 + 6 > 10 && 4 == 4 || 0;
    = 11 > 10 && 4 == 4 || 0;
    = 1 && 1 || 0;
    = 1 || 0;
    = 1;

*/

int main(){
    int resultado = 5 + 3 * 2 > 10 && 4 == 4 || 0;
    printf("Resultado: %d\n", resultado);
    return 0;

}
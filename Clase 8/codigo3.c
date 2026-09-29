#include <stdio.h>

void main(){
    char c = ' ';
    int bandera = 0; // Falso = 0

    while(!bandera){
        printf("Dame un caracter: \n");
        fflush(stdin);
        scanf("%c",&c);
        printf("El caracter que metiste es: %c \n", c);
        bandera = ((c >= '0') && (c <= '9'));
    }

    printf("Adioooos \n");
}
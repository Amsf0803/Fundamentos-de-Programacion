#include <stdio.h>

void main(){
    char c = ' ';
    int bandera = 1; // Falso = 0
    // Aunque no se cumple la condicion, se ejecuta al menos una vez

    do{
        printf("Dame un caracter: \n");
        fflush(stdin);
        scanf("%c",&c);
        printf("El caracter que metiste es: %c \n", c);
        bandera = ((c >= '0') && (c <= '9'));
    }while(!bandera);

    printf("Adioooos \n");
}
#include <stdio.h>
#include <ctype.h>

void main(){
    char c = ' ';
    int bandera = 1; // Verdadero = 1;

    while(bandera){
        printf("Dame un caracter: \n");
        fflush(stdin);
        c = getchar();
        printf("El caracter que metiste es: %c \n", c);
        printf("El caracter es entero?: %d \n", isdigit((int)c));
        // bandera = isdigit((int)c);
        if (isdigit((int)c)){
            break;
        }
    }

    printf("Adioooos \n");
}
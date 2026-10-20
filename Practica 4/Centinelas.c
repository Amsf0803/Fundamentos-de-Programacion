#include <stdio.h>

const int cent = -1;

int main() {

    int valor = 0, suma = 0,numeros = 0;
    float promedio = 0;
    while(valor != cent) {
        printf("Introduzca un valor para sumar: ");
        scanf("%d", &valor);
        if(valor == cent) {
            break;
        }
        suma = suma + valor;
        numeros++;
    }
    promedio = (float)suma / numeros;

    printf("La suma de los valores introducidos es: %d.", 
    suma);
    printf("El promedio de los valores introducidos es: %.2f.", 
    promedio);

    return 0;
    }
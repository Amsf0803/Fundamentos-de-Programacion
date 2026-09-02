/*
Andre Michel Santana Fajardo

Programa que recibe 2 numeros enteros y calcula e imprime el producto, cociente y residuo

*/

#include <stdio.h>

int main(){
    int N1,N2, P, R;
    float C;
    printf("Dime el primer numero porfis: "); // Preguntamos por el primer numero xd
    scanf("%i", &N1); // Guardamos el valor obtenido en la variable N1

    printf("Dime el segundo numero porfis: "); // Preguntamos por el primer numero xd
    scanf("%i", &N2); // Guardamos el valor obtenido en la variable N1

    P = N1 * N2; // Calculamos el Producto
    C = N1 / N2; // Calculamos el Cociente
    R = N1 % N2; // Calculamo el Residuo

    printf("El producto de los 2 numeros es: %i", P);
    printf("\n\n");
    
    printf("El cociente de los 2 numeros es: %f", C);
    printf("\n\n");

    printf("El residuo de los 2 numeros es: %i", R);

    return 0;
}
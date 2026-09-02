/*
Andre Michel Santana Fajardo

Programa que recibe 2 numeros y les saca el cuadrado para sacr la hipotenusa
*/

#include <stdio.h>
#include <math.h>

int main(){
    int A,B,Hi;
    float Hf;

    printf("Dime el valor de A porfis: "); // Preguntamos por el valor A xd
    scanf("%i", &A); // Guardamos el valor obtenido en la variable A

    printf("Dime el valor de B porfis: "); // Preguntamos por el valor B xd
    scanf("%i", &B); // Guardamos el valor obtenido en la variable B

    Hi = (A*A + B*B); // Sacamos la suma del cuadrado de ambos numeros
    Hf = sqrt(Hi); // Sacamos la raiz cuadrada de la suma anterior

    printf("El valor de la hipotenusa es: %f", Hf);

    return 0;
}
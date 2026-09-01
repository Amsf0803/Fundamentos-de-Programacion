// Andre Santana
// Explicacion del Programa:
/*
Programa que calcula la superficie y longitud de una 
circunferencia,dado su radio.
*/

#include <stdio.h>
#define PI 3.1415123

void main(){
    float radio, S=0, L=0; // S=superficie, L=longitud, declaracion de variables locales

    printf("\n\n\n");
    printf("Dame el radio de la circunferencia: ");
    scanf("%f", &radio);
    
    S = (radio * radio) * PI; // Aqui se calcula la superficie de la circunferencia
    L = 2 * PI * radio; // Aqui se calcula la longitud de la circunferencia

    printf("La superficie es: %f\n", S);
    printf("La longitud es: %f\n", L);
    printf("El radio es: %f\n", radio);

}







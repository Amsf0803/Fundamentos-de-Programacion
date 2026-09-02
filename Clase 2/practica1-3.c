/*
Andre Michel Santana Fajardo

Programa que recibe 6 numeros para la ecuacion 
ax + by = c
dx + ey = f

Asi que calcula el valor de x y de y
*/

#include <stdio.h>

int main(){
    float A,B, C, D, E, F, X, Y;

    printf("Dime el valor de A porfis: "); // Preguntamos por el valor A xd
    scanf("%f", &A); // Guardamos el valor obtenido en la variable A

    printf("Dime el valor de B porfis: "); // Preguntamos por el valor B xd
    scanf("%f", &B); // Guardamos el valor obtenido en la variable f

    printf("Dime el valor de C porfis: "); // Preguntamos por el valor C xd
    scanf("%f", &C); // Guardamos fl valor obtenido en la variable C

    printf("Dime el valor de D porfis: "); // Preguntamos por el valor D xd
    scanf("%f", &D); // Guardamos el valor obtenido en la variable D

    printf("Dime el valor de E porfis: "); // Preguntamos por el valor E xd
    scanf("%f", &E); // Guardamos el valor obtenido en la variable E

    printf("Dime el valor de F porfis: "); // Preguntamos por el valor F xd
    scanf("%f", &F); // Guardamos el valor obtenido en la variable F

X = (C*E - B*F)/(A*E - B*D); // Calculamos X
Y = (A*F - C*D)/(A*E - B*D); // Calculamos Y

    printf("El valor de x es: %f", X);
    printf("\n\n");
    
    printf("El valor de y es: %f", Y);

    return 0;
}
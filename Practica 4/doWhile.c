#include <stdio.h>

int main(){
    int valor1 = 0, valor2 = 0, suma = 0,continuar=1;

    do{
        printf("Introduzca 2 valores para sumar separador por 1 espacio: \n ");
        scanf("%d %d", &valor1, &valor2);
        suma = suma + valor1 + valor2;
        printf("La suma de los valores introducidos es: %d.\n", suma);
        printf("Si desea salir presione 0, sino 1 para continuar: \n");
        scanf("%d", &continuar);
    }while(continuar != 0);
    return 0;
}
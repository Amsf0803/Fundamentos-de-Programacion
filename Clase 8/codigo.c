#include <stdio.h>

void main(){
    int n=0, x=0;
    int suma = 0;
    int contador = 1;
    float  prom = 0;
    printf("Cuantas veces hacemos la suma? \n");
    scanf("%d",&n);

    while(contador <= n){

        printf("Dame el valor x porfis: \n");
        scanf("%d",&x);
        suma += x;
        contador++;
    }

    prom= (float)suma/(float)n;

    printf("El resultado de la operacion es: \n");
    printf("Suma total: %d \n", suma);
    printf("El promedio es: %f \n", prom);
    printf("El ciclo se ejecuto %d veces: \n", contador-1);

}
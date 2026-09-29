#include <stdio.h>

#define CENT -1

void main(){
    int n=0, x=0;
    int suma = 0;
    float  prom = 0;
    while(x!= CENT){

    printf("Dame el valor x porfis: \n");
    scanf("%d",&x);
        if(x!=CENT){
            suma += x;
            n++;
        }
        
    }

    prom= (float)suma/(float)n;

    printf("El resultado de la operacion es: \n");
    printf("Suma total: %d \n", suma);
    printf("El promedio es: %f \n", prom);
    printf("El ciclo se ejecuto %d veces: \n", n);

}
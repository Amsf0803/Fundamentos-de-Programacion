#include <stdio.h>
#include <math.h>
int main(){
    int bandera = 1;
    float valor = 0;
    while(bandera == 1){
        printf("Introduzca un valor para calcular la funcion f(x) = x*log(x): \n");
        scanf("%f", &valor);
        if(valor <= 0){
            printf("El valor introducido es invalido.\n");
            bandera = 0;
        }else{
            printf("El valor de la funcion f(x) = x*log(x) es: %.2f\n", valor*log(valor));
        }
    }
    return 0;
}
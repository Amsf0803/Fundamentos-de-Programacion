#include <stdio.h>

int main(){
    short opcion; // Es un valor corto de pocos bits
    int a,b,res;
    float res_d;
    printf("Hola \n");
    printf("1. Suma de 2 numero  \n");
    printf("2. Resta de 2 numero  \n");
    printf("3. Multiplicacion de 2 numero  \n");
    printf("4. Division de 2 numero  \n");
    printf("5. Modulo de 2 numero  \n");
    printf("Elige una opcion: ");
    scanf("%d", &opcion);
    switch(opcion){

        case 1: // Suma
            printf("Dame los 2 numeros a sumar: \n");
            scanf("%d %d", &a,&b);
            res = a+b;
            printf("El resultado es: %d \n", res);
            break;
        case 2:// Resta
            printf("Dame los 2 numeros a restar: \n ");
            scanf("%d %d", &a,&b);
            res = a-b;
            printf("El resultado es: %d \n", res);
            break;
        case 3:// Multiplicacion
            printf("Dame los 2 numeros a multiplicar: \n ");
            scanf("%d %d", &a,&b);
            res = a*b;
            printf("El resultado es: %d \n", res);
            break;
        case 4:// Division
            printf("Dame los 2 numeros a dividir: \n");
            scanf("%d %d", &a,&b);
            res_d = (float)a/ (float)b;
            printf("El resultado es: %f \n", res_d);
            break;
        case 5:// Mdodulo
            printf("Dame los 2 numeros a modular: \n");
            scanf("%d %d", &a,&b);
            res = a%b;
            printf("El resultado es: %d \n", res);
            break;

        default:
            printf("Opcion no valida!!! >:( \n");
            break;
    }
    return 0;
}


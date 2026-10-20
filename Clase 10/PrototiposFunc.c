#include <stdio.h>
#include <stdlib.h>

// Global
// Prototipos

int suma(int,int); 
int resta(int,int); 
void multi(); 
float division(float,float);
int modulo(int,int);
void mensaje(void);  // Como no recibe parametros es posible pero opcional ponerle void en parametros

int main(){
    short opcion; // Es un valor corto de pocos bits
    int a,b,res;
    float res_d;

    // system("clear");  Es un comando de terminal, ps limpia todo para ser estetico
    do{
        printf("\nHola \n");
        printf("1. Suma de 2 numero  \n");
        printf("2. Resta de 2 numero  \n");
        printf("3. Multiplicacion de 2 numero  \n");
        printf("4. Division de 2 numero  \n");
        printf("5. Modulo de 2 numero  \n");
        printf("6. Salir  \n");
        printf("Elige una opcion: ");
        scanf("%d", &opcion);
        switch(opcion){

            case 1: // Suma
                printf("Dame los 2 numeros a sumar: \n");
                scanf("%d %d", &a,&b);
                res = suma(a,b);
                printf("El resultado es: %d \n", res);
                break;
            case 2:// Resta
                printf("Dame los 2 numeros a restar: \n ");
                scanf("%d %d", &a,&b);
                res = resta(a,b);
                printf("El resultado es: %d \n", res);
                break;
            case 3:// Multiplicacion
                multi();
                break;
            case 4:// Division
                printf("Dame los 2 numeros a dividir: \n");
                scanf("%d %d", &a,&b);
                res_d = (float)a/ (float)b;
                printf("El resultado es: %f \n", res_d);
                break;
            case 5:// Modulo
                printf("Dame los 2 numeros a modular: \n");
                scanf("%d %d", &a,&b);
                res = a%b;
                printf("El resultado es: %d \n", res);
                break;
            case 6:// Salir
                mensaje();
                break;

            default:
                printf("Opcion no valida!!! >:( \n");
                break;
        }

    }while(opcion != 6);
    return 0;
}

int suma(int v1, int v2){
    int r=0;
    r = v1 + v2;
    return r;
}

int resta(int v1, int v2){
    return v1 - v2;
}

void multi(){
    int a=0,b=0, res=0;
    printf("Dame los 2 numeros a sumar: \n");
    scanf("%d %d", &a,&b);
    res = suma(a,b);
    printf("El resultado es: %d \n", res);

}


void mensaje(){
    printf("Adioooos \n");
}
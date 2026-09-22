#include <stdio.h>

int main(){

    int a=0,b=0,residuo=0;
    printf("Dame 2 valores a y b \n");
    scanf("%d %d",&a,&b);

    residuo = a%b;
    // Seleccion simple:
    /*
    if(residuo == 0){ // Si es verdadero, entra al bloque
        printf("%d es divisible entre %d \n",a,b);
    }
    */

    // Seleccion doble:
    /*
    if(residuo == 0){ // Si es verdadero, entra al bloque.
        printf("%d SI es divisible entre %d \n",a,b);
    }else{ // Si es falso entra a este otro bloque.
        printf("%d NO es divisible entre %d \n",a,b);
    }

    */
    // Por si le quieres hacer a la mmda xd
    // (condicional)? Sisecumple : SiNOsecumple

    printf("\n\n Operador ?:\n");

    (residuo ==0)? printf("%d SI es divisible entre %d \n",a,b) : printf("%d NO es divisible entre %d \n",a,b);


    printf("\n Adios!!!");


    return 0;
}
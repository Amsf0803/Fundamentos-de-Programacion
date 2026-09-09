#include <stdio.h>

int main(){
    int a,b,suma,resta,multi,divi,modulo;
    float c,d, divf;
    a = 17;
    b = 5;

    suma = a + b;
    resta = a - b;
    multi = a * b;
    divi = a / b;
    modulo = a % b;

    printf("Suma: %d\n",suma);
    printf("Resta: %d\n",resta);
    printf("Multiplicacion: %d\n",multi);
    printf("Division: %d\n",divi);
    printf("Modulo: %d\n",modulo);

    c = a;
    d = b;

    divf = c / d;
    printf("Division flotante: %.2f\n",divf);
    /*
    Si a y b son enteros la division nos dara solo la parte entera osea de 
    q si la division es, 5/2, el resultado es 2.5 pero solo nos dara 2 en cambio 
    si la division es con numeros flotantes si nos dara el 2.5.

     */
    
    return 0;
}
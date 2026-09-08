#include <stdio.h>

int main() {
    
    double expr = 0;
    int n=10,m=20, t=0;

    printf("\n Evaluacion simple de una expresion:");
    
    expr = 6+2*3-4/2;
    printf("\n El resultado de la expresion es: %lf\n", expr);
    printf("\n El resultado de la expresion reducida es: %.2lf\n", expr);

    // Uso de operadores ++ y --

    printf("\n Uso de operadores ++ y --\n");
    printf("\n n = %d\n \t\t m = %d",n,m);
    n++;
    m--;
    printf("\n n = %d\n \t\t m = %d",n,m);
    ++n;
    --m;
    printf("\n n = %d\n \t\t m = %d",n,m);
    m = n++;
    printf("\n n = %d\n \t\t m = %d",n,m);
    n = m--;
    printf("\n n = %d\n \t\t m = %d",n,m);
    m = ++n;
    printf("\n n = %d\n \t\t m = %d",n,m);
    n = --m;
    printf("\n n = %d\n \t\t m = %d",n,m);

    n =5,m=6; //t = 0
    printf("\n t = %d\t\t n =%d \t\t m = %d\t\t",t,n,m);
    t = ++n*--m;
    printf("\n t = %d\t\t n =%d \t\t m = %d\t\t",t,n,m);
    t = n++*m--;
    printf("\n t = %d\t\t n =%d \t\t m = %d\t\t",t,n,m);
    t = n--*2+m++*2+--m;
    printf("\n t = %d\t\t n = %d\t\t m = %d",t,n,m);
    return 0;
}
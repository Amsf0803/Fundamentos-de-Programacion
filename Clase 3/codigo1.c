#include <stdio.h>

int main() {
    int a,b, res=0;
    int c,d;
    float resf=0;
    int boleanito = 0;
    // Operadores aritmeticos
    printf("Dame 2 numeros enteros: \n"); 
    scanf("%d %d", &a, &b);

    res = a +b;
    printf("La suma es: %d\n", res);
    res = a - b;
    printf("La resta es: %d\n", res);
    res = a * b;
    printf("El producto es: %d\n", res);
    resf = (float)a / (float)b; // Cast
    printf("El cociente es: %f\n", resf);
    res = a % b;
    printf("El modulo es: %d\n", res);


    // Operadores relacionales
    boleanito = (a==b);
    printf("a es igual a b??? %d\n", boleanito);
    boleanito = (a!=b);
    printf("a es diferente a b??? %d\n", boleanito);
    boleanito = (a>b);
    printf("a es mayor que b??? %d\n", boleanito);
    boleanito = (a<b);
    printf("a es menor que b??? %d\n", boleanito);
    boleanito = (a>=b);
    printf("a es mayor o igual que b??? %d\n", boleanito);
    boleanito = (a<=b);
    printf("a es menor o igual que b??? %d\n", boleanito);

    // Operadores logicos
    printf("Dame 4 numeros enteros: \n"); 
    scanf("%d %d %d %d",&a,&b,&c,&d);

    boleanito = (a==b) && (c!=d);
    printf("El resultado de la evaluacion es: %d\n", boleanito);
    printf("La negacion de la evaculacion anterior es: %d\n", !boleanito);

    boleanito = (a==b) && (c!=d) || (a<d);
    printf("El resultado de la evaluacion es: %d\n", boleanito);
    printf("La negacion de la evaculacion anterior es: %d\n", !boleanito);


    return 0;
}

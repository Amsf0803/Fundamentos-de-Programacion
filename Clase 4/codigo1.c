#include <stdio.h>

int main() {
    int a,b, res=0;
    int c,d;
    float resf=0;
    int boleanito = 0;
    int eval = 19;
    /*
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

    */
// Aqui empieza lo de la clase 4 lo demas de arriba es igual que el de la clase 3 

    // Operadores de asignacion
    // Precedencia de operadores

    res = 1+2*3;
    printf("El resultado es: %d\n", res);

    res = (1+2)*3;
    printf("El resultado es: %d\n", res);

    res++; // res = res + 1;
    printf("El resultado es: %d\n", res);

    res*= 2; // res = res * 2;
    printf("El resultado es: %d\n", res);

    res--; // res = res - 1;
    printf("El resultado es: %d\n", res);

    --res; // res = res - 1;
    printf("El resultado es: %d\n", res);

    ++res; // res = res + 1;
    printf("El resultado es: %d\n", res);

    // Pero si varia si es ++res o res++
    
    eval = ++res+3;
    printf("El resultado de la evaluacion de ++res es: %d\n", eval); // Aqui da 23
    printf("El valor de res es: %d\n", res); // res es igual a 20
    eval = 19;
    res = 19;
    eval = res++ +3;
    printf("El resultado de la evaluacion de res++ es: %d\n", eval); // Aqui da 22
    printf("El valor de res es: %d\n", res); // res es 20

    /*
    Pasa ya que r++ es un operador de post incremento, 
    es decir primero se evalua la expresion y despues se incrementa el valor de res, 
    mientras que ++res es un operador de pre incremento, es decir primero se incrementa 
    el valor de res y despues se evalua la expresion.
    */

    

    return 0;
}

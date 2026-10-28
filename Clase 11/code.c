#include <stdio.h>

long int factorial(int); // Prototipo

int main(){

    int n = 0;
    long int fact = 0;

    printf("Dame un numero: \n");
    scanf("%d",&n);

    fact = n * factorial(n-1);

    printf("El factorial de %d es, %d \n", n,fact);

    return 0;
}

long int factorial(int n){

    if(n == 0 || n==1){
        return 1;
    }else{
        return n * factorial(n-1);
    }
}


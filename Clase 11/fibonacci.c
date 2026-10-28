#include <stdio.h>

long int fibonacci(int);

int main(){
    int n;
    long int fibo;
    printf("Dame un numero porfis :) \n");
    scanf("%d",&n);

    fibo =fibonacci(n);

    printf("El numero de fibonacci es: %d",fibo);

    return 0;
}

long int fibonacci(int n){
    if(n <= 1){
        return n;
    }
    else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
#include <stdio.h>

int main(){
    int a,b,c,mayor=0;

    printf("Dame 3 valores: \n");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b)
        if(a>c)
            mayor = a;
        else
            mayor = c;
    else if(a==c)
        if (a>b)
            mayor = a;
        else 
            mayor = b;
        
    else if(a==b)
        if (a>c)
            mayor = a;
        else 
            mayor = c;
    else if (b>c)   
        mayor = b;
    else if (c==b)
        if (c>a)
            mayor = c;
        else 
            mayor = a;
    else 
        mayor = c;

    printf("El numero mas grande es: %d",mayor);

    return 0;
}
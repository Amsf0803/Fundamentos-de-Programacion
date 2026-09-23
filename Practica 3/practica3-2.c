#include <stdio.h>

int main(){
    int x;
    printf("Dime el valor de x:  ");
    scanf("%d", &x);
    if(x<0){
        x = x*x;
    }else{
        x = x*x*x;
    }
    printf("X vale: %d  \n",x);
    return 0;
}
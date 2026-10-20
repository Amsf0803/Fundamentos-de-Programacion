#include <stdio.h>
#include <math.h>
void main(){
    long int ev=0;
    int x;
    for(x=0; x<15; x++){
        ev = exp(2*x) - x; 
        printf("f(%d) = %ld\n", x, ev);
        printf("f(%d) = exp(2*%d) - %d = %ld \n", x,x,x, ev);

    }
    printf("Lo hemos logrado \n");

}
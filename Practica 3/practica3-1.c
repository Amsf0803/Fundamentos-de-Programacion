#include <stdio.h>

int main(){
    int kw=0;
    float tarifa=0;
    printf("De cuantos kW es tu consumo de luz: ");
    scanf("%d",&kw);
    if(kw<1000){
        tarifa = 1.2;
    }else if(kw<=1850){
        tarifa = 1.0;
    }
    else {tarifa = 0.9;}

    printf("Tu tarifa es de: %f pesos \n",tarifa);

}
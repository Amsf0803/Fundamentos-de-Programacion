#include <stdio.h>
int main(){
    float compra=0;
    float descuento=0;
    printf("De cuanto fue tu compra de hoy: ");
    scanf("%f",&compra);
    if(compra<800){
        descuento = 0;
    }else if(compra >= 800 && compra <= 1500){
        
        descuento = 0.1;
        compra = compra - (compra*descuento);
        descuento = 10;
    }else if(compra > 1500 && compra <= 5000){
        descuento = 0.15;
        compra = compra - (compra*descuento);
        descuento = 15;
    }else{
        descuento = 0.2;
        compra = compra - (compra*descuento);
        descuento = 20;
    }

    printf("Gracias por tu compra :) \n");
    printf("Tu descuento fue del: %f por ciento \n",descuento);
    printf("El precio final ya con descuento es de %f \n",compra);
    return 0;
}
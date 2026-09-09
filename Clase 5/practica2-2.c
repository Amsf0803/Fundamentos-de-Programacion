#include <stdio.h>

int main(){
    int x,y,igual,nega,mayor,menor,mayori,menori;

    x = 12;
    y = 20;

    igual = (x == y);
    nega = (x != y);
    mayor = (x > y);
    menor = (x < y);
    mayori = (x >= y);
    menori = (x <= y);

    printf("Igual: %d\n",igual);
    printf("Negacion: %d\n",nega);
    printf("Mayor: %d\n",mayor);        
    printf("Menor: %d\n",menor);
    printf("Mayor o igual: %d\n",mayori);
    printf("Menor o igual: %d\n",menori);

    return 0;
}
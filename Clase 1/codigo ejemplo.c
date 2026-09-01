#include <stdio.h>
#include <math.h>
#define Valor 5.7

double modulo3D (double x, double y, double z);

double mod3;

double modulo3D (double x, double y, double z){
    return (sqrt(x*x + y*y + z*z));
}

int main(void)
{
    int x, y, z;
    x=y=z=Valor;
    mod3 = modulo3D(x, y, z);
    printf("\nE1 modulo es: %lf", mod3);
}
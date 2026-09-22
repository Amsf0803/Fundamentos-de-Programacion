#include <stdio.h>

int main(){
    // Seleccion multiple
    int a;
    printf("Dame el valor de a: \n");
    scanf("%d",&a);

    if(a>0)
        printf("%d es Positivo \n",a);
    else if(a<0)
        printf("%d es Negativo \n",a);
    else
        printf("%d es 0\n",a);



    return 0;
}
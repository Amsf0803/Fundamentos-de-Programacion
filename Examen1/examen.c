#include <stdio.h>

int main(){

    short opcion;
    int n,n2,m,a,b,b1,bandera=1,contador=1;
    float promedio;
    do{
        printf("\n\n  Holaa \n");
        printf("1. Cuenta regresiva  \n");
        printf("2. Suma infinita  \n");
        printf("3. n y m  \n");
        printf("4. Salida  \n");
        printf("Elige una opcion: ");
        scanf("%d",&opcion);
        switch(opcion){
            case 1:
                printf("Pon un numero porfis \n");
                scanf("%d",&a);
                printf("Cuenta regresiva \n");
                printf("%d \n",a);
                while(a){
                    a--;
                    printf("%d \n",a);
                }
                break;
            case 2:
                printf("Pon un numero porfis \n ");
                scanf("%d",&b);
                contador =1;
                
                while(bandera){
                    printf("Pon un numero para sumar \n ");
                    printf("Pon un 0 para cancelar \n ");
                    scanf("%d",&b1);
                    if(b1==0){
                        promedio = (float) b / (float) contador;
                        printf("La suma total fue de: %d \n",b);
                        printf("El promedio fue de: %f \n",promedio);
                        printf("Se sumo %d veces \n",contador);
                        break;
                    }else{
                        b+=b1;
                        contador++;
                    }
                }
                break;
            case 3:
                printf("Pon 2 numeros porfis \n ");
                scanf("%d %d",&n, &m);
                printf("La suma se vera asi: \n ");
                printf("%d \n",n);
                n2=n;
                while(n2<m){
                    n2++;
                    n += (n2);
                    printf("%d \n",n);

                }
                break;
            
            case 4:
                printf("Adioooos :)");
                break;
            
            default:
                printf("Opcion no valida!!! >:( \n");
                break;
        }

    }while(opcion != 4);
    return 0;
}
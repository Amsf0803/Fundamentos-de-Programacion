#include <stdio.h>

int main(){
    int contador;

    contador = 10;
    printf("Contador normal: %d\n",contador);
    contador += 5;
    printf("Contador +=5: %d\n",contador);

    contador -= 3;
    printf("Contador -=3: %d\n",contador);
    contador *= 2;
    printf("Contador *=2: %d\n",contador);
    contador /=4;
    printf("Contador /=4: %d\n",contador);
    contador %=5;
    printf("Contador modulo 5: %d\n",contador);

    contador = contador * 2;
    printf("Forma normal usando el asignador simple: %d\n",contador);

    return 0;
}




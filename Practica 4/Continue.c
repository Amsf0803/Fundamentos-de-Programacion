#include <stdio.h>

int main(){
    int valor = 0;
    for(int i =0; i <=100; i++){
        if(i%2 == 0){
            printf("\n %d\t\t %d", i,i++);
        }else{
            continue;
        }
    }

    return 0;
}
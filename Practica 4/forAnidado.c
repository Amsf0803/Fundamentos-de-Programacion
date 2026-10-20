#include <stdio.h>

int main(){
    
    for(int i=0; i<8;i++){
        if(i==0 || i==7){
            for(int j=0; j<20;j++){
                printf("*");
            }
            printf("\n");
        }else{
            printf("*");
            for(int j=0; j<18;j++){
                printf(" ");
            }
            printf("*\n");
        }
    }

    for(int i=0; i<8;i++){
        if(i==0 || i==7){
            for(int j=0; j<20;j++){
                printf("*");
            }
            printf("\n");
        }else{
            printf("*");
            for(int j=0; j<17;j++){
                printf(" ");
            }
            printf("*\n");
        }
    }

    return 0;
}
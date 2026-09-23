#include <stdio.h>

int main(){

    char vocal;
    printf("Dime una letra: ");
    scanf("%c",&vocal);
    
    if(vocal == 'a' || vocal == 'A'){
        printf("La %c es una vocal",vocal);
    }else if(vocal == 'e' || vocal == 'E'){
        printf("La %c es una vocal",vocal);
    }else if(vocal == 'i' || vocal == 'I'){
        printf("La %c es una vocal",vocal);
    } else if(vocal == 'o' || vocal == 'O'){
        printf("La %c es una vocal",vocal);
    } else if(vocal == 'u' || vocal == 'U'){
        printf("La %c es una vocal",vocal);
    }else{
        printf("La %c NO es una vocal",vocal);
    }

    return 0;
}
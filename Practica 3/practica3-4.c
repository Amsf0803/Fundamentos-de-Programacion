#include <stdio.h>

int main() {
    char letra;

    printf("Ingresa una letra porfis (Solo 1): ");
    scanf("%c", &letra);

    switch (letra) {
        case 'a':
        case 'A':
            printf("Es la vocal: A\n");
            break;
        case 'e':
        case 'E':
            printf("Es la vocal: E\n");
            break;
        case 'i':
        case 'I':
            printf("Es la vocal: I\n");
            break;
        case 'o':
        case 'O':
            printf("Es la vocal: O\n");
            break;
        case 'u':
        case 'U':
            printf("Es la vocal: U\n");
            break;
        default:
            printf("No es una vocal.\n");
    }

    return 0;
}

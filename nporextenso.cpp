#include <stdio.h>

int main() {
    int num;
    printf("Digite um n�mero de 1 a 9: ");
    scanf("%d", &num);

    switch(num) {
        case 1: printf("Um"); break;
        case 2: printf("Dois"); break;
        case 3: printf("Tr�s"); break;
        case 4: printf("Quatro"); break;
        case 5: printf("Cinco"); break;
        case 6: printf("Seis"); break;
        case 7: printf("Sete"); break;
        case 8: printf("Oito"); break;
        case 9: printf("Nove"); break;
        default: printf("Valor inv�lido"); break;
    }

    return 0;
}

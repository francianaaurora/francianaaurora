#include <stdio.h>

int main() {
    int dia;
    printf("Digite um n�mero de 1 a 7: ");
    scanf("%d", &dia);

    switch(dia) {
        case 1: printf("Domingo"); break;
        case 2: printf("Segunda-feira"); break;
        case 3: printf("Ter�a-feira"); break;
        case 4: printf("Quarta-feira"); break;
        case 5: printf("Quinta-feira"); break;
        case 6: printf("Sexta-feira"); break;
        case 7: printf("S�bado"); break;
        default: printf("Valor inv�lido\n"); break;
    }

    return 0;
}

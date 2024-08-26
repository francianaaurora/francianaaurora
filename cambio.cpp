#include <stdio.h>

int main() {
    float dolares, taxa_cambio, kwanzas;

    printf("Digite o valor em dolares: ");
    scanf("%f", &dolares);

    printf("Digite a taxa de cambio (dolares para kwanza): ");
    scanf("%f", &taxa_cambio);

    kwanzas = dolares * taxa_cambio;

    printf("Valor em Kwanza: %.2f\n", kwanzas);

    return 0;
}

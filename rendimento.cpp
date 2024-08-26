#include <stdio.h>

int main() {
    float valorDeposito, valorFinal;


    printf("Digite o valor depositado: ");
    scanf("%f", &valorDeposito);

    valorFinal = valorDeposito * 70/100;

    printf("Valor com rendimento após um mês: %.2f\n", valorFinal);

    return 0;
}

#include <stdio.h>

int main() {
    int num;
    printf("Digite um n�mero: ");
    scanf("%d", &num);
    
    if (num >= 1 && num <= 12 && num != 8 && num != 9) {
        printf("O n�mero %d est� no intervalo e � diferente de 8 ou 9.\n", num);
    } else {
        printf("O n�mero %d n�o atende �s condi��es.\n", num);
    }

    return 0;
}

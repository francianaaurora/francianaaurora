#include <stdio.h>

int main() {
    int numero;
    printf("Digite um n�mero: ");
    scanf("%d", &numero);
    
    if (numero >= 100 && numero <= 200) {
        printf("O n�mero %d est� no intervalo de 100 a 200.\n", numero);
    } else {
        printf("O n�mero %d n�o est� no intervalo de 100 a 200.\n", numero);
    }
    
    return 0;
}

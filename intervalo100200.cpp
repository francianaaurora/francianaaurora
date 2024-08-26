#include <stdio.h>

int main() {
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);
    
    if (numero >= 100 && numero <= 200) {
        printf("O número %d está no intervalo de 100 a 200.\n", numero);
    } else {
        printf("O número %d não está no intervalo de 100 a 200.\n", numero);
    }
    
    return 0;
}

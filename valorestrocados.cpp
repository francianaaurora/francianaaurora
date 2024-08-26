#include <stdio.h>

int main() {
    int A, B, aux;
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    aux = A;
    A = B;
    B = aux;

    printf("Valores trocados: A = %d, B = %d\n", A, B);

    return 0;
}

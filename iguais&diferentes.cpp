#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite o primeiro n�mero: ");
    scanf("%d", &num1);

    printf("Digite o segundo n�mero: ");
    scanf("%d", &num2);

    if(num1 == num2) {
        printf("Os n�meros s�o iguais.\n");
    } else {
        printf("Os n�meros s�o diferentes.\n");
    }

    return 0;
}

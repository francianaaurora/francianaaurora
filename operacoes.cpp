#include <stdio.h>

int main() {
    int num1, num2;
    int soma, subtracao, multiplicacao, divisao;

    printf("Digite o primeiro n�mero: ");
    scanf("%d", &num1);

    printf("Digite o segundo n�mero: ");
    scanf("%d", &num2);

    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;

    if (num2 != 0) {
        divisao = num1 / num2;
        printf("Divis�o: %d\n", divisao);
    } else {
        printf("Erro: Divis�o por zero n�o � permitida.\n");
    }

    printf("Soma: %d\n", soma);
    printf("Subtra��o: %d\n", subtracao);
    printf("Multiplica��o: %d\n", multiplicacao);

    return 0;
}

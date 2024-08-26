#include <stdio.h>

int main() {
    int num1, num2;
    int soma, subtracao, multiplicacao, divisao;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;

    if (num2 != 0) {
        divisao = num1 / num2;
        printf("Divisão: %d\n", divisao);
    } else {
        printf("Erro: Divisão por zero não é permitida.\n");
    }

    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", subtracao);
    printf("Multiplicação: %d\n", multiplicacao);

    return 0;
}

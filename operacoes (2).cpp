#include <stdio.h>

int main() {
    int num1, num2, opcao;
    float resultado;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("Escolha a operacao (1. Adicao 2. Subtracao 3. Multiplicacao 4. Divisao): ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            resultado = num1 + num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 2:
            resultado = num1 - num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 3:
            resultado = num1 * num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 4:
            if (num2 != 0) {
                resultado = (float)num1 / num2;
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Erro: Divisao por zero!\n");
            }
            break;
        default:
            printf("Opcao invalida!\n");
            break;
    }

    return 0;
}

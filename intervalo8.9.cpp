#include <stdio.h>

int main() {
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    
    if (num >= 1 && num <= 12 && num != 8 && num != 9) {
        printf("O número %d está no intervalo e é diferente de 8 ou 9.\n", num);
    } else {
        printf("O número %d não atende às condições.\n", num);
    }

    return 0;
}

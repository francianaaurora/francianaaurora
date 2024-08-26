#include <stdio.h>

int main() {
    int idades[70];

    for (int i = 0; i < 70; i++) {
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idades[i]);
    }

    for (int i = 0; i < 70; i++) {
        if (idades[i] >= 18) {
            printf("Pessoa %d é maior de idade.\n", i + 1);
        } else {
            printf("Pessoa %d é menor de idade.\n", i + 1);
        }
    }

    return 0;
}

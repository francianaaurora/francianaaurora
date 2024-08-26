#include <stdio.h>
#include <string.h>

int main() {
    char nome1[100], nome2[100], nome3[100];

    printf("Digite o primeiro nome: ");
    scanf("%s", nome1);
    printf("Digite o segundo nome: ");
    scanf("%s", nome2);
    printf("Digite o terceiro nome: ");
    scanf("%s", nome3);

    if (strcmp(nome1, nome2) == 0 && strcmp(nome2, nome3) == 0) {
        printf("Os três nomes são iguais.\n");
    } else {
        printf("Os três nomes não são iguais.\n");
    }

    return 0;
}

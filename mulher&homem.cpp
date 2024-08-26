#include <stdio.h>

int main() {
    char nomes[48][100];
    char sexos[48];
    int i, homens = 0, mulheres = 0;

    for (i = 0; i < 48; i++) {
        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf("%s", nomes[i]);
        printf("Digite o sexo da pessoa %d (M/F): ", i + 1);
        scanf(" %c", &sexos[i]);
        if (sexos[i] == 'M' || sexos[i] == 'm') {
            homens++;
        } else if (sexos[i] == 'F' || sexos[i] == 'f') {
            mulheres++;
        }
    }

    for (i = 0; i < 48; i++) {
        printf("Nome: %s, Sexo: %s\n", nomes[i], (sexos[i] == 'M' || sexos[i] == 'm') ? "Homem" : "Mulher");
    }

    printf("Total de homens: %d\n", homens);
    printf("Total de mulheres: %d\n", mulheres);

    return 0;
}

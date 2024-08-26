#include <stdio.h>

#define MAX 100

int main() {
    char nome[MAX];
    char nome_invertido[MAX];
    int i, j;

    printf("Digite o nome: ");
    scanf("%99[^\n]", nome);

    for (i = 0; nome[i] != '\0'; i++);

    for (j = i - 1, i = 0; j >= 0; j--, i++) {
        nome_invertido[i] = nome[j];
    }
    nome_invertido[i] = '\0';

    printf("Nome trocado: %s\n", nome_invertido);

    return 0;
}


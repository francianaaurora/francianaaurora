#include <stdio.h>

int main() {
    int ano_nascimento, ano_atual = 2024, idade;
    char nome[50];

    printf("Digite o seu nome: ");
    scanf("%s", nome);

    printf("Digite o seu ano de nascimento: ");
    scanf("%d", &ano_nascimento);

    idade = ano_atual - ano_nascimento;

    printf("%s, você tem %d anos.\n", nome, idade);

    return 0;
}

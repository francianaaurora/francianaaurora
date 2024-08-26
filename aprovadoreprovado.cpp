#include <stdio.h>

int main() {
    char nome[50];
    float nota1, nota2, media;

    printf("Digite o nome do aluno: ");
    scanf("%s", nome);

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    if (media >= 10) {
        printf("%s, Aprovado\n", nome);
    } else {
        printf("%s, Reprovado\n", nome);
    }

    return 0;
}

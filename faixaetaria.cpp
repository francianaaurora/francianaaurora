#include <stdio.h>

int main() {
    int idade;
    
    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade >= 0 && idade <= 2) {
        printf("Beb�\n");
    } else if (idade >= 3 && idade <= 12) {
        printf("Crian�a\n");
    } else if (idade >= 13 && idade <= 17) {
        printf("Adolescente\n");
    } else if (idade >= 18 && idade <= 35) {
        printf("Jovem\n");
    } else if (idade >= 36 && idade <= 60) {
        printf("Senhor\n");
    } else if (idade > 60) {
        printf("Velho\n");
    } else {
        printf("Idade inv�lida\n");
    }

    return 0;
}

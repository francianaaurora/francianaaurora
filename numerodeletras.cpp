#include <stdio.h>

int main() {
    char nome[100];
    int i = 0;
    
    printf("Digite o nome: ");
    scanf("%99s", nome);
    
    while (nome[i] != '\0') {
        i++;
    }
    
    printf("O nome tem %d letras.\n", i);
    
    return 0;
}

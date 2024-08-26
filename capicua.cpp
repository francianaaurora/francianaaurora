#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];
    int i, j, capicua = 1;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    j = strlen(palavra) - 1;

    for(i = 0; i < j; i++, j--) {
        if(palavra[i] != palavra[j]) {
            capicua = 0;
            break;
        }
    }

    if(capicua)
        printf("A palavra é capicua.\n");
    else
        printf("A palavra não é capicua.\n");

    return 0;
}

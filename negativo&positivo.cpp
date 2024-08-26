#include <stdio.h>

int main() {
    int N, num;
    
    printf("Digite a quantidade de numeros: ");
    scanf("%d", &N);
    
    for(int i = 0; i < N; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &num);
        
        if(num > 0) {
            printf("%d é positivo\n", num);
        } else if(num < 0) {
            printf("%d é negativo\n", num);
        } else {
            printf("%d é zero\n", num);
        }
    }
    
    return 0;
}

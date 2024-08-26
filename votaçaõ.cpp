#include <stdio.h>

int main() {
    int votos[5] = {0, 0, 0, 0, 0};  
        int voto;
    
    printf("Eleicoes para Delegado da Turma - Sala 208\n");
    printf("Por favor, escolha o seu candidato:\n");
    printf("1. Shaban\n");
    printf("2. Menenses Cirilo\n");
    printf("3. Eusebio de Sousa\n");
    printf("4. Binga\n");
    printf("5. Dorivaldo\n\n");
    
    for (int i = 0; i < 10; i++) {
        printf("Eleitor %d, insira o numero do seu candidato: ", i + 1);
        scanf("%d", &voto);
        
        if (voto >= 1 && voto <= 5) {
            votos[voto - 1]++;
            printf("Voto registrado para: ");
            switch (voto) {
                case 1:
                    printf("Shaban\n");
                    break;
                case 2:
                    printf("Menenses Cirilo\n");
                    break;
                case 3:
                    printf("Eusebio de Sousa\n");
                    break;
                case 4:
                    printf("Binga\n");
                    break;
                case 5:
                    printf("Dorivaldo\n");
                    break;
            }
        } else {
            printf("Voto Nulo\n");
        }
        printf("\n");
    }

    printf("Resultado final da votacao:\n");
    printf("Shaban: %d votos\n", votos[0]);
    printf("Menenses Cirilo: %d votos\n", votos[1]);
    printf("Eusebio de Sousa: %d votos\n", votos[2]);
    printf("Binga: %d votos\n", votos[3]);
    printf("Dorivaldo: %d votos\n", votos[4]);

    return 0;
}

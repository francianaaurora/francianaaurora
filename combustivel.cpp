#include <stdio.h>

int main() {
    float distancia, combustivel, consumo_medio;
    
    scanf("%f %f", &distancia, &combustivel);
    
    consumo_medio = distancia / combustivel;
    
    printf("%.3f km/l\n", consumo_medio);
    
    return 0;
}

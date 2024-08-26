#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    scanf("%f", &celsius);
    fahrenheit = (9 * celsius + 160) / 5;
    printf("A temperatura e de:,%.2f\n", fahrenheit);
    return 0;
}

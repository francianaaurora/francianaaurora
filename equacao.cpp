#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, raiz1, raiz2;

    printf("Digite os coeficientes a, b e c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("N�o � uma equa��o do segundo grau.\n");
        return 1;
    }

    raiz1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    raiz2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

    if (b * b - 4 * a * c >= 0) {
        printf("Ra�zes reais: %.2lf e %.2lf\n", raiz1, raiz2);
    } else {
        printf("N�o h� ra�zes reais\n");
    }

    return 0;
}

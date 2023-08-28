#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    printf("Digite o valor de a (diferente de zero): ");
    scanf("%lf", &a);

    if (a == 0) {
        printf("Não é uma equação de segundo grau.\n");
        return 0;
    }

    printf("Digite o valor de b: ");
    scanf("%lf", &b);
    printf("Digite o valor de c: ");
    scanf("%lf", &c);

    double delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf("Não existe raiz real.\n");
    } else if (delta == 0) {
        double raizUnica = -b / (2 * a);
        printf("Raiz única: %lf\n", raizUnica);
    } else {
        double raiz1 = (-b + sqrt(delta)) / (2 * a);
        double raiz2 = (-b - sqrt(delta)) / (2 * a);
        printf("Duas raízes reais:\n");
        printf("Raiz 1: %lf\n", raiz1);
        printf("Raiz 2: %lf\n", raiz2);
    }

    return 0;
}
#include <stdio.h>

int main() {
    double nota1, nota2, nota3;
    printf("Digite a nota da primeira prova: ");
    scanf("%lf", &nota1);
    printf("Digite a nota da segunda prova: ");
    scanf("%lf", &nota2);
    printf("Digite a nota da terceira prova: ");
    scanf("%lf", &nota3);

    double media = (nota1 + nota2 + 2 * nota3) / 4;

    printf("A média do aluno é: %lf\n", media);

    if (media >= 7.0) {
        printf("Aluno aprovado!\n");
    } else {
        printf("Aluno reprovado.\n");
    }

    return 0;
}
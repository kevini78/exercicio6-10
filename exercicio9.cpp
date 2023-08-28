#include <stdio.h>

int main() {
    double salarioAtual;
    int tempoServico;

    printf("Digite o valor do salário atual do funcionário: ");
    scanf("%lf", &salarioAtual);
    printf("Digite o tempo de serviço do funcionário (em anos): ");
    scanf("%d", &tempoServico);

    double salarioReajustado = salarioAtual; // Inicializa com o valor atual

    if (salarioAtual <= 500) {
        salarioReajustado *= 1.25; // Reajuste de 25%
    } else if (salarioAtual <= 1000 && tempoServico >= 1 && tempoServico <= 3) {
        salarioReajustado *= 1.20; // Reajuste de 20%
        salarioReajustado += 100; // Bônus de 100 reais
    } else if (salarioAtual <= 1500 && tempoServico >= 4 && tempoServico <= 6) {
        salarioReajustado *= 1.15; // Reajuste de 15%
        salarioReajustado += 200; // Bônus de 200 reais
    } else if (salarioAtual <= 2000 && tempoServico >= 7 && tempoServico <= 10) {
        salarioReajustado *= 1.10; // Reajuste de 10%
        salarioReajustado += 300; // Bônus de 300 reais
    } else if (tempoServico > 10) {
        salarioReajustado += 500; // Bônus de 500 reais (sem reajuste)
    } else {
        printf("O funcionário não tem direito a aumento.\n");
        return 0; // Encerra o programa
    }

    printf("O valor do salário final reajustado é: %.2lf\n", salarioReajustado);

    return 0;
}
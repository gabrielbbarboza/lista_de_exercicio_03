#include <stdio.h>

int main() {
    float valor1, valor2;

    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);

    do {
        printf("Digite o segundo valor (diferente de zero): ");
        scanf("%f", &valor2);
    } while (valor2 == 0);

    printf("Resultado da divisão: %.2f\n", valor1 / valor2);

    return 0;
}


#include <stdio.h>

int main() {
    int n; // Declara a vari�vel para o valor lido
    int i, j; // Declara vari�veis para os loops

    // L� um valor inteiro
    printf("Digite um valor inteiro: ");
    scanf("%d", &n);

    // Garante que o valor seja maior que 0
    if (n <= 0) {
        printf("Valor inv�lido. O valor deve ser maior que 0.\n");
        return 1; // Encerra o programa com c�digo de erro
    }

    // Loop para imprimir o tri�ngulo invertido
    for (i = n; i >= 1; i--) {
        // Loop para imprimir os asteriscos
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        // Quebra de linha ap�s cada linha do tri�ngulo
        printf("\n");
    }

    return 0;
}


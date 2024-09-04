#include <stdio.h>

int main() {
    int n; // Declara a variável para o valor lido
    int i, j; // Declara variáveis para os loops

    // Lê um valor inteiro
    printf("Digite um valor inteiro: ");
    scanf("%d", &n);

    // Garante que o valor seja maior que 0
    if (n <= 0) {
        printf("Valor inválido. O valor deve ser maior que 0.\n");
        return 1; // Encerra o programa com código de erro
    }

    // Loop para imprimir o triângulo invertido
    for (i = n; i >= 1; i--) {
        // Loop para imprimir os asteriscos
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        // Quebra de linha após cada linha do triângulo
        printf("\n");
    }

    return 0;
}


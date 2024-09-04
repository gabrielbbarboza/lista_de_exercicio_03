#include <stdio.h>

int main() {
    int N; // Declara a vari�vel N
    int i; // Declara a vari�vel i

    // L� o valor de N
    printf("Digite um valor para N (maior que ZERO): ");
    scanf("%d", &N);

    // Verifica se N � maior que ZERO
    if (N > 0) {
        // Inicializa a vari�vel i com 1
        i = 1;

        // Loop para imprimir valores de 1 at� N usando while
        while (i <= N) {
            printf("%d\n", i);
            i++; // Incrementa i
        }
    } else {
        printf("O valor de N deve ser maior que ZERO.\n");
    }

    return 0;
}


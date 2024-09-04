#include <stdio.h>

int main() {
    int N; // Declara a variável N
    int i; // Declara a variável i

    // Lê o valor de N
    printf("Digite um valor para N (maior que ZERO): ");
    scanf("%d", &N);

    // Verifica se N é maior que ZERO
    if (N > 0) {
        // Inicializa a variável i com 1
        i = 1;

        // Loop para imprimir valores de 1 até N usando while
        while (i <= N) {
            printf("%d\n", i);
            i++; // Incrementa i
        }
    } else {
        printf("O valor de N deve ser maior que ZERO.\n");
    }

    return 0;
}


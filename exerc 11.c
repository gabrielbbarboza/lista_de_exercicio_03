#include <stdio.h>

int main() {
    int N; 
    int i;

    do {
        printf("Digite um valor para N (maior que ZERO): ");
        scanf("%d", &N);
        if (N <= 0) {
            printf("Valor invalido. ");
        }
    } while (N <= 0);

    i = 1;

    while (i <= N) {
        printf("%d\n", i);
        i++;
    }

    return 0;
}


#include <stdio.h>

int main() {
    int i;
    int soma = 0;
    int cont = 0;

    for (i = 15; i <= 100; i++) {
        soma += i;
        cont++;
    }
    float media = (float)soma / cont;

    printf("A média aritmética dos números inteiros entre 15 e 100 é: %.2f\n", media);

    return 0;
}


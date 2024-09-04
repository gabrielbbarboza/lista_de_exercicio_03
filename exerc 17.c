#include <stdio.h>

int main() {
    char resposta;
    float valor;
    float soma = 0;
    int cont = 0;

    do {
        printf("Digite o valor da mercadoria: ");
        scanf("%f", &valor);

        soma += valor;
        cont++;

        printf("MAIS MERCADORIAS (S/N)? ");
        scanf(" %c", &resposta);
    } while (resposta == 'S' || resposta == 's');

    if (cont > 0) {
        float media = soma / cont;

        printf("O valor total em estoque é: %.2f\n", soma);
        printf("A média de valor das mercadorias é: %.2f\n", media);
    } else {
        printf("Nenhuma mercadoria foi informada.\n");
    }

    return 0;
}


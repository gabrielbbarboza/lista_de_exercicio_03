#include <stdio.h>

int main() {
    int num_mercadorias;
    float soma = 0;
    float media; 
    float valor;

    printf("Digite o numero total de mercadorias no estoque: ");
    scanf("%d", &num_mercadorias);

    if (num_mercadorias <= 0) {
        printf("Numero de mercadorias invalido. O valor deve ser maior que 0.\n");
        return 1;
    }

    int i = 0;

    while (i < num_mercadorias) {
        printf("Digite o valor da mercadoria %d: ", i + 1);
        scanf("%f", &valor);
        soma += valor;
        i++;
    }

    media = soma / num_mercadorias;

    printf("O valor total em estoque eh: %.2f\n", soma);
    printf("A media de valor das mercadorias eh: %.2f\n", media);

    return 0;
}


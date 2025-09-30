#include <stdio.h>

int main() {
    // Quantidade de casas que cada peça vai andar
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // ----------------------
    // Torre - usando FOR
    // ----------------------
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // ----------------------
    // Bispo - usando WHILE
    // ----------------------
    printf("\nMovimento do Bispo:\n");
    int i = 1;
    while (i <= casasBispo) {
        printf("Cima, Direita\n");
        i++;
    }

    // ----------------------
    // Rainha - usando DO-WHILE
    // -------------------
    printf("\nMovimento da Rainha:\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= casasRainha);

    return 0;
}

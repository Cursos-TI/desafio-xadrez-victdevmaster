#include <stdio.h>

// ----------------------
// Funções Recursivas
// ----------------------

// Torre: movimento recursivo para a direita
void moverTorre(int casas) {
    if (casas == 0) return; // caso base
    printf("Direita\n");
    moverTorre(casas - 1); // chamada recursiva
}

// Rainha: movimento recursivo para a esquerda
void moverRainha(int casas) {
    if (casas == 0) return; // caso base
    printf("Esquerda\n");
    moverRainha(casas - 1); // chamada recursiva
}

// Bispo: movimento recursivo para cima e direita
void moverBispoRecursivo(int casas) {
    if (casas == 0) return; // caso base
    printf("Cima, Direita\n");
    moverBispoRecursivo(casas - 1); // chamada recursiva
}

// ----------------------
// Programa Principal
// ----------------------
int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // ----------------------
    // Torre - Recursividade
    // ----------------------
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    // ----------------------
    // Bispo - Recursividade + Loops Aninhados
    // --------------------
    printf("\nMovimento do Bispo:\n");
    moverBispoRecursivo(casasBispo);

    // Exemplo adicional de loops aninhados (vertical + horizontal)
    printf("\nMovimento do Bispo (loops aninhados):\n");
    for (int v = 1; v <= casasBispo; v++) {       // movimento vertical
        for (int h = 1; h <= 1; h++) {            // movimento horizontal (1 passo por vez)
            printf("Cima, Direita\n");
        }
    }

    // ------------------
    // Rainha - Recursividade
    // ----------------------
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    // ----------------------
    // Cavalo - Loops Complexos
    // ------------------
    printf("\nMovimento do Cavalo:\n");

    int movimentosVertical = 2;  // duas casas para cima
    int movimentosHorizontal = 1; // uma casa para a direita

    for (int v = 1; v <= movimentosVertical; v++) {
        if (v == 1) {
            printf("Cima\n");
            continue; // vai para a próxima iteração do loop sem executar abaixo
        }
        if (v == 2) {
            printf("Cima\n");
            for (int h = 1; h <= movimentosHorizontal; h++) {
                printf("Direita\n");
                break; // já completou o movimento em L
            }
        }
    }

    return 0;
}

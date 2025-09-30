

#include <stdio.h>

int main() {
    

    // ----------------------
    // Cavalo - usando FOR + WHILE (loops aninhados)
    // ----------------------
    printf("\nMovimento do Cavalo:\n");



    // Loop externo (FOR) -> controla o movimento "Baixo"
    for (int i = 1; i <= 2; i++) {
        printf("Baixo\n");

        // Loop interno (WHILE) -> controla o movimento "Esquerda"
        // Só executa quando chegarmos no último "Baixo"
        if (i == 2) {
            int e = 1;
            while (e <= 1) {
                printf("Esquerda\n");
                e++;
            }
        }
    }

    return 0;
}

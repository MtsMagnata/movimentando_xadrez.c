#include <stdio.h>

int main() {
    // Número de casas que cada peça vai se mover
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    int i = 0; // Variável de controle

    // ------------------------
    // Movimento da Torre
    // ------------------------
    printf("Movimento da Torre (5 casas para a direita):\n");
    for(i = 0; i < casasTorre; i++) { // Usando 'for' para a Torre
        printf("Direita\n");
    }

    // ------------------------
    // Movimento do Bispo
    // ------------------------
    printf("\nMovimento do Bispo (5 casas na diagonal Cima-Direita):\n");
    i = 0; // Reiniciando variável de controle
    while(i < casasBispo) { // Usando 'while' para o Bispo
        printf("Cima, Direita\n");
        i++;
    }

    // ------------------------
    // Movimento da Rainha
    // ------------------------
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    i = 0; // Reiniciando variável de controle
    do { // Usando 'do-while' para a Rainha
        printf("Esquerda\n");
        i++;
    } while(i < casasRainha);

    return 0;
}

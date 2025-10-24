#include <stdio.h>

int main() {
    // Número de casas que cada peça vai se mover
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Movimento do Cavalo: 2 para Baixo e 1 para Esquerda
    int movBaixo = 2;
    int movEsquerda = 1;

    int i = 0; // Variável de controle

    // ------------------------
    // Movimento da Torre (for)
    // ------------------------
    printf("Movimento da Torre (5 casas para a direita):\n");
    for(i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    // ------------------------
    // Movimento do Bispo (while)
    // ------------------------
    printf("\nMovimento do Bispo (5 casas na diagonal Cima-Direita):\n");
    i = 0;
    while(i < casasBispo) {
        printf("Cima, Direita\n");
        i++;
    }

    // ------------------------
    // Movimento da Rainha (do-while)
    // ------------------------
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while(i < casasRainha);

    // ------------------------
    // Movimento do Cavalo (loops aninhados)
    // ------------------------
    printf("\nMovimento do Cavalo (2 casas para Baixo e 1 para Esquerda):\n");

    // Loop externo com for: controla o número total de movimentos "em L"
    for(int movimento = 0; movimento < 1; movimento++) {
        // Loop interno com while: faz as 2 casas para baixo
        int j = 0;
        while(j < movBaixo) {
            printf("Baixo\n");
            j++;
        }

        // Após 2 passos para baixo, faz 1 passo para a esquerda
        for(int k = 0; k < movEsquerda; k++) {
            printf("Esquerda\n");
        }
    }

    return 0;
}
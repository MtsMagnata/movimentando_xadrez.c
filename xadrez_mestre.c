#include <stdio.h>

// ---------------------------------------------
// TORRE - Movimento recursivo (linha reta)
// ---------------------------------------------
void moverTorre(int casas) {
    if (casas <= 0)
        return; // Caso base: parou o movimento

    printf("Direita\n"); // Ação
    moverTorre(casas - 1); // Passo recursivo
}

// ---------------------------------------------
// RAINHA - Movimento recursivo (linha reta)
// ---------------------------------------------
void moverRainha(int casas) {
    if (casas <= 0)
        return;

    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// ---------------------------------------------
// BISPO - Movimento recursivo (diagonal)
// ---------------------------------------------
void moverBispoRecursivo(int casas) {
    if (casas <= 0)
        return;

    printf("Cima, Direita\n");
    moverBispoRecursivo(casas - 1);
}

// ---------------------------------------------
// BISPO - Movimento com loops aninhados
// Loop externo: movimento vertical
// Loop interno: movimento horizontal
// ---------------------------------------------
void moverBispoComLoops(int linhas, int colunas) {
    printf("Movimento do Bispo (loops aninhados vertical/horizontal):\n");
    for (int i = 0; i < linhas; i++) {      // Vertical
        for (int j = 0; j < colunas; j++) { // Horizontal
            printf("Cima, Direita\n");
        }
    }
    printf("\n");
}

// ---------------------------------------------
// CAVALO - Movimento com loops complexos
// 2 casas para cima e 1 para direita
// Usa break e continue
// ---------------------------------------------
void moverCavalo(int movimentos) {
    printf("Movimento do Cavalo (2 casas para Cima e 1 para Direita):\n");

    for (int m = 0; m < movimentos; m++) {
        int cima = 0;

        // Movimento para cima (2 casas)
        while (cima < 2) {
            if (cima == 1) {
                cima++;
                continue; // Exemplo de uso de 'continue'
            }
            printf("Cima\n");
            cima++;
        }

        // Movimento para direita (1 casa)
        for (int d = 0; d < 1; d++) {
            printf("Direita\n");
            break; // Exemplo de uso de 'break'
        }
    }
    printf("\n");
}

// ---------------------------------------------
// Função principal
// ---------------------------------------------
int main() {
    // Definição de parâmetros fixos (sem entrada do usuário)
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int movimentosCavalo = 1;

    printf("=====================================\n");
    printf("MOVIMENTAÇÃO DAS PEÇAS DE XADREZ\n");
    printf("=====================================\n\n");

    printf("--- Torre ---\n");
    moverTorre(casasTorre);
    printf("\n");

    printf("--- Bispo (recursivo) ---\n");
    moverBispoRecursivo(casasBispo);
    printf("\n");

    printf("--- Bispo (loops aninhados) ---\n");
    moverBispoComLoops(2, 2);
    printf("\n");

    printf("--- Rainha ---\n");
    moverRainha(casasRainha);
    printf("\n");

    printf("--- Cavalo ---\n");
    moverCavalo(movimentosCavalo);
    printf("\n");

    printf("=== Fim dos Movimentos ===\n");
    return 0;
}

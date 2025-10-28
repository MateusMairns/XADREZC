#include <stdio.h>

int main() {
    // Simulação dos movimentos das peças de xadrez

    // ---------- TORRE ----------
    // Mover a torre 5 casas para a direita


    printf("Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n"); //imprimir a direção do movimento
    }

    printf("\n"); // Espaço entre as peças

    // ---------- BISPO ----------
    // Mover o Bispo 5 casas na diagonal para cima e à direita.
    printf("Bispo:\n");
    int i = 1; 

    while (i <= 5) {
        printf("Cima, Direita\n"); //imprimir a direção do movimento
        i++;
    }

    printf("\n"); // Espaço entre as peças

    // ---------- RAINHA ----------
    
    // Mover a Rainha 8 casas para a esquerda.
    
    printf("Rainha:\n");
    int r = 1;


    do {
        printf("Esquerda\n");
        r++;
    } while (r <= 8);

    // Fim do programa
    return 0;
}



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

    
    printf("\n"); // Espaço entre as peças

    // ---------- CAVALO ----------
    
    // Mover o cavalo 2 para cima e 1 para direita

    printf("Cavalo:\n");
    int MovimentoCompleto = 1; //Controlar movimento em "L"

    while (MovimentoCompleto--)
    {
        for (int i = 0; i < 2; i++){
            printf("CIma\n"); // imprimir "cima" 2 vezes
            }
            printf("Direita\n"); // imprimir "Direita" 1 vez
    }
    


    // Fim do programa

    return 0;
}




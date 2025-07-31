#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Sistema de movimentação das peças usando recursividade e loops complexos.

// ------------------ FUNÇÕES REUTILIZÁVEIS ------------------

// TORRE: Move recursivamente uma única vez para a direita, N casas
void moverTorreDireita(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorreDireita(casas - 1);
}

// BISPO: Move uma única vez em diagonal (cima + direita), N casas, usando loops aninhados com recursividade
// alterada por sugestão da tutoria
void moverBispoDiagonal(int casas, int atual) {    
    if (atual > casas) return;    
    printf("Cima\n");    
    printf("Direita\n");    
    moverBispoDiagonal(casas, atual + 1);
}


// RAINHA: Move recursivamente uma única vez para a esquerda, N casas
void moverRainhaEsquerda(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainhaEsquerda(casas - 1);
}

// CAVALO: Move uma única vez em "L" (duas casas para cima e uma para a direita), usando loops complexos
// alterado por sugest"ao da tutoria
void moverCavaloEmL() {    
    // Duas casas para Cima
    for (int i = 0; i < 2; i++) {        
        printf("Cima\n");    
    }    
    // Uma casa para Direita    
    for (int j = 0; j < 1; j++) { 
        printf("Direita\n"); 
    }    
}

void moverCavaloEmL() {
    int dx[] = {-2}; // duas casas para cima
    int dy[] = {1};  // uma casa para a direita

    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 1; j++) {
            if (dx[i] == -2 && dy[j] == 1) {
                printf("Cima\n");
                printf("Cima\n");
                printf("Direita\n");
                break;
            } else {
                continue;
            }
        }
    }
}

// Função principal para cada peça
void moverTorre() {
    int casas = 5;
    printf("Movimento da Torre:\n");
    moverTorreDireita(casas);
    printf("\n");
}

void moverBispo() {
    int casas = 5;
    printf("Movimento do Bispo:\n");
    moverBispoDiagonal(casas, 1);
    printf("\n");
}

void moverRainha() {
    int casas = 8;
    printf("Movimento da Rainha:\n");
    moverRainhaEsquerda(casas);
    printf("\n");
}

void moverCavalo() {
    printf("Movimento do Cavalo:\n");
    moverCavaloEmL();
    printf("\n");
}

// ------------------ FUNÇÃO PRINCIPAL ------------------

int main() {
    moverTorre();   // Requisito Mestre: Recursão
    moverBispo();   // Requisito Mestre: Recursão + Loop Aninhado
    moverRainha();  // Requisito Mestre: Recursão
    moverCavalo();  // Requisito Mestre: Loop aninhado com condições

    return 0;
}
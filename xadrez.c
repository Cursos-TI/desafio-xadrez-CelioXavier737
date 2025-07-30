#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.


    //                       Nivel Novato
    // ------------------ MOVIMENTO DA TORRE ------------------
    // A Torre anda 5 casas para a direita
    // Usaremos o laço FOR para simular o movimento

    int casasTorre = 5;   // numero de movimentos para a torra
    int casasBispo = 5;   // numero de movimentos para o bispo
    int casasRainha = 8;  // numero de movimentos para a rainha
    int contador = 1;  // contador de repetições para uso geral  dos laços de repetição while e do-while
    

    printf("Movimento da Torre:\n");

    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }


    //                       Nivel Novato
    // ------------------ MOVIMENTO DO BISPO ------------------
    // O Bispo anda 5 casas na diagonal para cima e à direita
    // Usaremos o laço WHILE para simular o movimento

    printf("\nMovimento do Bispo:\n");

    // inicio o contador 
    contador = 1;

    while (contador <= casasBispo) {
        printf("Cima\n");
        printf("Direita\n");
        contador++;
    }


    //                       Nivel Novato
    // ------------------ MOVIMENTO DA RAINHA ------------------
    // A Rainha anda 8 casas para a esquerda
    // Usaremos o laço DO-WHILE para simular o movimento

    printf("\nMovimento da Rainha:\n");

    // inicio o contador 
    contador = 1;

    do {
        printf("Esquerda\n");
        contador++;
    } while (contador <= casasRainha);

    return 0;
}

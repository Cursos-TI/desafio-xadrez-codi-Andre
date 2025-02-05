#include <stdio.h>

void movimentarPeca(int casas, char peca[], char movimento1[], char movimento2[]);
// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int bispo = 5, torre = 5, rainha = 8;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    while(bispo > 0) {
        printf("Bispo: Cima\n");
        printf("Bispo: Direita\n");
        bispo--;
    };

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    do {
        printf("Torre: Direita\n");
        torre--;
    } while (torre > 0);
    
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    for (int i = 0; i < rainha; i++)
    {
        printf("Rainha: Esquerda\n");
    };

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    for (int down = 2, left = 1; left > 0; left--)
    {
        while(down > 0) {
            printf("Cavalo: Baixo\n");
            down--;
        };
        printf("Cavalo: Esquerda\n");
    };

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
    movimentarPeca(5, "Bispo", "Cima", "Direita");
    movimentarPeca(5, "Torre", "Direita", "");
    movimentarPeca(8, "Rainha", "Esquerda", "");

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    for (int cima = 1, direita = 2; cima > 0; cima--)
    {
        printf("Cavalo: Cima\n");

        while(direita > 0) {
            printf("Cavalo: Direita\n");
            direita--;
        };
    };

    return 0;
}

void movimentarPeca(int casas, char peca[], char movimento1[], char movimento2[]) {
    if (casas <= 0) {
        return;
    };

    printf("%s: %s\n", peca, movimento1);

    if (movimento2 != "") {
        printf("%s: %s\n", peca, movimento2);
    }

    movimentarPeca(casas - 1, peca, movimento1, movimento2);
};
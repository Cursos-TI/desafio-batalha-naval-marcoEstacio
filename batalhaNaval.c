#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // 1 coluna e 1 linha a mais para imprimir referências das coordenadas
    // as posições do tabuleiro serão de 1 a 10, e 0 para as referencias
    int tabuleiro[11][11];
    int i, j; // posições da matriz
    int posicaoLinha[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    char posicaoColuna[11] = {' ', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'}; // referência coord. vertical

    // posições água
    for (i = 0; i < 11; i++)
        for (j = 0; j < 11; j++)
            tabuleiro[i][j] = 0;

    // posições navios
    tabuleiro[8][3] = 3;
    tabuleiro[8][4] = 3;
    tabuleiro[8][5] = 3;
    tabuleiro[2][3] = 3;
    tabuleiro[3][3] = 3;
    tabuleiro[4][3] = 3;

    for (i = 0; i < 11; i++)
    {
        for (j = 0; j < 11; j++)
        {
            // imprime apenas a linha referência das colunas
            if (i == 0)
                printf("%c ", posicaoColuna[j]);
            // imprime apenas a linha referência das linhas
            else if (j == 0)
                printf("%d ", posicaoLinha[i]);
            else
                printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1

    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}

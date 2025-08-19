#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize printf para exibir as coordenadas de cada parte dos navios.
    
    int index;

    char * Navios [2][4]= {
        {"Navio 0", "A4", "A5", "A6"},
        {"Navio 1", "B2", "C2", "D2"}
    };

    printf("Digite o número do Navio que deseja ver a localização: \n");
    printf("Para o Navio 0, digite 0 \n");
    printf("Para o Navio 1, digite 1 \n");
   
    scanf("%d", &index);

    printf("A localização do %s é: %s , %s , %s \n", Navios[index][0], Navios[index][1], Navios[index][2], Navios[index][3]);

    return 0;
}

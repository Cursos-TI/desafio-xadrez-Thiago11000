#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    
    int Torre, Bispo, Rainha;
    int escolha, i = 1;

    printf("***Escolha qual Peça ira mover***\n");
    printf("1. Torre \n");
    printf("2. Rainha \n");
    printf("3. Bispo \n");
    printf("Escolha um:");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:

     printf("Torre!");

    for (int i = 0; i <= 5; i++)
    {
        printf("Direita \n");
    }
        break;
    
    case 2:

    do
    {
       printf("Esquerda \n");
       i++;

    } while (i <= 8);
    
        break;
    case 3:

        while (i <= 5)
        {
            printf("Cima, Direita \n");
            i++;
        }
        
        break;
    
    }
    

    

    return 0;
}

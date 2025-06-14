#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    int Torre, Bispo, Rainha;
    int escolha, escolha2, i = 1;

    printf("***Escolha qual Peça ira mover***\n");
    printf("1. Torre \n");
    printf("2. Rainha \n");
    printf("3. Bispo \n");
    printf("4. Cavalo \n");
    printf("Escolha um:");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:

    printf("\n ***Você escolheu a Torre*** \n");
         printf("1. Direita \n");
         printf("2. Esquerda \n");
         printf("3. Cima \n");
         printf("4. Baixo \n");
    printf("Escolha o Movimento: ");
     scanf("%d", &escolha2);


    switch (escolha2)
    {
    case 1: 

    for (int i = 0; i <= 5; i++)
    {
        printf("Direita \n");
    }
        break;
    
    case 2:

    for (int i = 0; i <= 5; i++)
    {
        printf("Esquerda \n");
    }
        break;

    case 3:

        for (int i = 0; i <= 5; i++)
    {
        printf("Cima \n");
    }
        break;
    case 4:

        for (int i = 0; i <= 5; i++)
    {
        printf("Baixo \n");
    }
        break;
    }
        break;
    
    case 2:

    printf("\n ***Você escolheu a Rainha*** \n");
         printf("1. Direita \n");
         printf("2. Esquerda \n");
         printf("3. Cima \n");
         printf("4. Baixo \n");
    printf("Escolha o Movimento:");
     scanf("%d", &escolha2);

    switch (escolha2)
    {
    case 1:

    do
    {
       printf("Direita \n");
       i++;

    } while (i <= 8);

        break;
    
    case 2:

    do
    {
       printf("Esquerda \n");
       i++;

    } while (i <= 8);

        break;

    case 3:

    do
    {
       printf("Cima \n");
       i++;

    } while (i <= 8);

        break;

    case 4:

    do
    {
       printf("Baixo \n");
       i++;

    } while (i <= 8);

        break;
    }
    
        break;

    case 3:

    printf("\n ***Você escolheu a Bispo*** \n");
         printf("1. Cima, Direita \n");
         printf("2. Cima, Esquerda \n");
         printf("3. Baixo, Direita \n");
         printf("4. Baixo, Esquerda \n");
    printf("Escolha o Movimento:");
     scanf("%d", &escolha2);

    switch (escolha2)
    {
    case 1:

        while (i <= 5)
        {
            printf("Cima, Direita \n");
            i++;
        }
        
        break;
    
    case 2:

        while (i <= 5)
        {
            printf("Cima, Esquerda \n");
            i++;
        }
        break;
    
    case 3:

        while (i <= 5)
        {
            printf("Baixo, Direita \n");
            i++;
        }
        break;
    
    case 4:

        while (i <= 5)
        {
            printf("Baixo, Esquerda \n");
            i++;
        }
        break;
    }
        break;

    case 4:

        printf("\n ***Você escolheu a Cavalo*** \n");
         printf("1. Cima, Cima, Direita \n");
         printf("2. Cima, Cima, Esquerda \n");
         printf("3. Baixo, Baixo, Direita \n");
         printf("4. Baixo, Baixo, Esquerda \n");
    printf("Escolha o Movimento:");
     scanf("%d", &escolha2);
       
    int movimentoCavalo = 1;

    switch (escolha2)
    {
    case 1:
        
        while (movimentoCavalo--)
        {
            for (int i = 0; i < 2; i++)
            {
                printf("Cima\n");
            }
            printf("Direita\n");
        }

        break;
    
    case 2:

        while (movimentoCavalo--)
        {
            for (int i = 0; i < 2; i++)
            {
                printf("Cima\n");
            }
            printf("Esquerda\n");
        }
        break;

    case 3:

        while (movimentoCavalo--)
        {
            for (int i = 0; i < 2; i++)
            {
                printf("Baixo\n");
            }
            printf("Direita\n");
        }
        break;

    case 4:

        while (movimentoCavalo--)
        {
            for (int i = 0; i < 2; i++)
            {
                printf("Baixo\n");
            }
            printf("Esquerda\n");
        }
        break;
    }
        
        break;

    
    }
    

    

    return 0;
}

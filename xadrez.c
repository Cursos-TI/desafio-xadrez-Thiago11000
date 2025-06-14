#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//  Torre

void moverTorre(int casas) {
    if (casas > 0)
    {
        printf("Direita\n");
        moverTorre(casas - 1);
    }    
}
void moverTorre2(int casas2) {
    if (casas2 > 0)
    {
        printf("Esquerda\n");
        moverTorre2(casas2 - 1);
    }    
}
void moverTorre3(int casas3) {
    if (casas3 > 0)
    {
        printf("Cima\n");
        moverTorre3(casas3 - 1);
    }    
}
void moverTorre4(int casas4) {
    if (casas4 > 0)
    {
        printf("Baixo\n");
        moverTorre4(casas4 - 1);
    }    
}

// Rainha

void moverRainha(int casa) {
    if (casa > 0)
    {
        printf("Direita\n");
        moverRainha(casa - 1);
    }    
}
void moverRainha2(int casa2) {
    if (casa2 > 0)
    {
        printf("Esquerda\n");
        moverRainha2(casa2 - 1);
    }    
}
void moverRainha3(int casa3) {
    if (casa3 > 0)
    {
        printf("Cima\n");
        moverRainha3(casa3 - 1);
    }    
}
void moverRainha4(int casa4) {
    if (casa4 > 0)
    {
        printf("Baixo\n");
        moverRainha4(casa4 - 1);
    }    
}

//Bispo

void moverBispo(int CASA) {
    if (CASA > 0)
    {
        printf("Direita\n");
        moverBispo(CASA - 1);
    }    
}
void moverBispo2(int CASA2) {
    if (CASA2 > 0)
    {
        printf("Esquerda\n");
        moverBispo2(CASA2 - 1);
    }    
}
void moverBispo3(int CASA3) {
    if (CASA3 > 0)
    {
        printf("Cima\n");
        moverBispo3(CASA3 - 1);
    }    
}
void moverBispo4(int CASA4) {
    if (CASA4 > 0)
    {
        printf("Baixo\n");
        moverBispo4(CASA4 - 1);
    }    
}

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

    moverTorre(5);

        break;
    
    case 2:

    moverTorre2(5);

        break;

    case 3:

    moverTorre3(5);

        break;
    case 4:

    moverTorre4(5);

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

    moverRainha(8);

        break;
    
    case 2:

    moverRainha2(8);

        break;

    case 3:

    moverRainha3(8);

        break;

    case 4:

    moverRainha4(8);

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

    moverBispo(5);
        
        break;
    
    case 2:

    moverBispo2(5);

        break;
    
    case 3:

    moverBispo3(5);

        break;
    
    case 4:

    moverBispo4(5);

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
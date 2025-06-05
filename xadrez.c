#include <stdio.h>
#include <stdlib.h>




//Início do jogo

int main() {
    int opcao1, opcao2, opcao3;

    printf("Bem vindo ao jogo de xadrez!\n");
    printf("Qual peça você vai escolher?\n");
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    scanf("%d", &opcao1);


    printf("Qual movimento deseja fazer?\n");

//lógica de direção

    switch (opcao1) {
        case 1:
            printf("1. Cima\n");
            printf("2. Baixo\n");
            printf("3. Direita\n");
            printf("4. Esquerda\n");
            scanf("%d", &opcao2);
            break;

        case 2:
            printf("1. Esquerda cima\n");
            printf("2. Esquerda baixo\n");
            printf("3. Direita cima\n");
            printf("4. Direita baixo\n");
            scanf("%d", &opcao2);
            break;

        case 3:
            printf("1. Cima\n");
            printf("2. Baixo\n");
            printf("3. Direita\n");
            printf("4. Esquerda\n");
            printf("5. Esquerda cima\n");
            printf("6. Esquerda baixo\n");
            printf("7. Direita cima\n");
            printf("8. Direita baixo\n");
            scanf("%d", &opcao2);
            break;

        default:
            printf("isso não é uma opção :(\n");
            break;
    }

  //Sistema de loops de repetição
    
    printf("Quantas casas deseja andar?\n");
    scanf("%d", &opcao3);

    if (opcao1 == 1) {
        switch (opcao2) {
            case 1:
                for (int I = 1; I <= opcao3; I++)
                    printf("Cima\n");
                break;
            case 2:
                for (int I = 1; I <= opcao3; I++)
                    printf("Baixo\n");
                break;
            case 3:
                for (int I = 1; I <= opcao3; I++)
                    printf("Direita\n");
                break;
            case 4:
                for (int I = 1; I <= opcao3; I++)
                    printf("Esquerda\n");
                break;
            default:
                printf("isso não é uma opção :(\n");
                break;
        }
    } else if (opcao1 == 2) {
        switch (opcao2) {
            case 1:
                for (int I = 1; I <= opcao3; I++)
                    printf("Esquerda cima\n");
                break;
            case 2:
                for (int I = 1; I <= opcao3; I++)
                    printf("Esquerda baixo\n");
                break;
            case 3:
                for (int I = 1; I <= opcao3; I++)
                    printf("Direita cima\n");
                break;
            case 4:
                for (int I = 1; I <= opcao3; I++)
                    printf("Direita baixo\n");
                break;
            default:
                printf("isso não é uma opção :(\n");
                break;
        }
    } else if (opcao1 == 3) {
        switch (opcao2) {
            case 1:
                for (int I = 1; I <= opcao3; I++)
                    printf("Cima\n");
                break;
            case 2:
                for (int I = 1; I <= opcao3; I++)
                    printf("Baixo\n");
                break;
            case 3:
                for (int I = 1; I <= opcao3; I++)
                    printf("Direita\n");
                break;
            case 4:
                for (int I = 1; I <= opcao3; I++)
                    printf("Esquerda\n");
                break;
            case 5:
                for (int I = 1; I <= opcao3; I++)
                    printf("Esquerda cima\n");
                break;
            case 6:
                for (int I = 1; I <= opcao3; I++)
                    printf("Esquerda baixo\n");
                break;
            case 7:
                for (int I = 1; I <= opcao3; I++)
                    printf("Direita cima\n");
                break;
            case 8:
                for (int I = 1; I <= opcao3; I++)
                    printf("Direita baixo\n");
                break;
            default:
                printf("isso não é uma opção :(\n");
                break;
        }
    }







    
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RESET "\033[0m"
#define AZUL "\033[1;34m"
#define ROXO "\033[1;35m"
#define CIANO "\033[1;36m"
#define VERMELHO "\033[1;31m"

int main() {
    
    printf(AZUL);
    printf("    _________                                \n");
    printf("    / ======= \\                             \n");
    printf("   / __________\\                            \n");
    printf("  | ___________ |                            \n"); 
    printf("  | | -       | |                            \n");
    printf("  | |         | |                            \n");
    printf("  | |_________| |________________________    \n");
    printf("  \\=____________/   "ROXO"Jogo da Adivinhacao"AZUL"    )\n");
    printf("  / \"\"\"\"\"\"\"\"\"\"\" \\                           \n");
    printf(" / ::::::::::::: \\                  =D-     \n"); 
    printf("(_________________)                          \n");
    printf(RESET"\n\n");

    printf(AZUL"*************************************\n");
    printf("* Bem vindo ao jogo de adivinhacao! *\n");
    printf("*************************************\n\n"RESET);

    int segundos = time(0);
    srand(segundos);
    int numerogrande = rand();
    int numerosecreto = numerogrande % 100; // número entre 0 e 99

    int chute;
    int tentativas = 1;
    double pontos = 1000.0;
    int acertou = 0;

    int nivel;
    printf(CIANO"Escolha o seu nivel de dificuldade\n"RESET);
    printf(ROXO"(1) Facil - (2) Medio - (3) Dificil\n\n"RESET);
    printf("Escolha: ");
    scanf("%d", &nivel);

    int numerotentativas;
    switch (nivel) {
        case 1:
            numerotentativas = 15;
            break;
        case 2:
            numerotentativas = 10;
            break;
        default:
            numerotentativas = 6;
            break;
    }

    for (int i = 1; i <= numerotentativas; i++) {
        printf(AZUL"\nTentativa %d\n"RESET, tentativas);
        printf("Informe o seu chute: ");
        scanf("%d", &chute);

        if (chute < 0) {
            printf(VERMELHO"\nVoce nao pode informar um chute negativo!\n");
            printf("Por favor, tente novamente.\n\n"RESET);
            continue;
        }

        acertou = (chute == numerosecreto);
        int maior = (chute > numerosecreto);

        if (acertou) {
            break;
        } else if (maior) {
            printf(ROXO"\nSeu chute foi MAIOR que o numero secreto.\n\n"RESET);
        } else {
            printf(ROXO"\nSeu chute foi MENOR que o numero secreto.\n\n"RESET);
        }

        tentativas++;
        double pontosperdidos = abs(chute - numerosecreto) / 2.0;
        pontos -= pontosperdidos;
    }

    printf(CIANO"Fim de jogo!\n"RESET);
    
    if (acertou) {
        printf("\n\n");
        printf(AZUL"    .     '     , \n");
        printf("    _________     \n");
        printf("_ /_|_____|_\\ _  \n");
        printf("   '. \\   / .'   \n");
        printf("     '.\\ /.'     \n");
        printf("       '.'        \n"RESET);
        printf("\n\n");
        printf(CIANO"*******************************************\n");
        printf("* Parabens! Voce acertou o numero secreto!*\n");
        printf("*******************************************\n\n"RESET);

        printf("Voce acertou o numero secreto "ROXO"%d"RESET" com "AZUL"%d"RESET" tentativas.\n", numerosecreto, tentativas);
        printf("Total de pontos nessa rodada: "ROXO"%.2f\n\n"RESET, pontos);
    } else {
        printf("\n\n");
        printf(VERMELHO"       \\|/ ____ \\|/    \n");   
        printf("        @~/ ,. \\~@      \n");   
        printf("       /_( \\__/ )_\\    \n");   
        printf("          \\__U_/        \n"RESET);
        printf(ROXO"\nVoce perdeu! Tente novamente!\n\n"RESET);
    }

    return 0;
}
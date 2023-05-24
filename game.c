#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

int main() {

    char colors[5][10] = {"rouge", "bleu", "jaune", "vert", "orange"};
    char playerGuess[10];
    int attempts = 0;
    bool hasWon = false;

    srand(time(NULL));
    int secretIndex = rand() % 5;
    char secretColor[10];
    strcpy(secretColor, colors[secretIndex]);

    printf("Bienvenue dans le jeu Trouver la Bonne Couleur !\n");
    printf("Devinez la couleur parmi : rouge, bleu, jaune, vert, orange\n");

    while (!hasWon) {
        printf("Entrez votre réponse : ");
        scanf("%s", playerGuess);
        attempts++;

        if (strcmp(playerGuess, secretColor) == 0) {
            printf("Félicitations ! Vous avez trouvé la bonne couleur en %d essai(s).\n", attempts);
            hasWon = true;
        } else {
            printf("Ce n'est pas la bonne couleur. Essayez encore.\n");
        }
    }

    return 0;
}
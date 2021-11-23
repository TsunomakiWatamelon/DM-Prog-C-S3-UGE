#include <stdio.h>
#include <MLV/MLV_all.h>

// 2. Implementation
#define TAILLE_PLATEAU 7
#define TAILLE_MAX_NOM 20

// 2.1 5
typedef struct {
    char nom[TAILLE_MAX_NOM];
    char symbol;
    int score;
} Joueur;

// 2.2
typedef struct {
    char plateau[TAILLE_PLATEAU + 2][TAILLE_PLATEAU + 2];
    Joueur * joueurs[2];
} Plateau;

//
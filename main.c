#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <mesprogrammes.h>

void initialiserJoueurs(Joueur joueurs[], int nombreJoueurs) {
    for (int i = 0; i < nombreJoueurs; i++) {
        printf("Entrez le nom du joueur %d: ", i + 1);
        fgets(joueurs[i].nom, sizeof(joueurs[i].nom), stdin);
        joueurs[i].nom[strcspn(joueurs[i].nom, "\n")] = '\0';  // Enlever le retour à la ligne à la fin du nom

        joueurs[i].position = (i == 0 || i == 1) ? 0 : 10;  // Les 2 premiers joueurs commencent à la position 0, les 2 autres à 10
        joueurs[i].couleur = i;  // Affectation d'une couleur (indice) pour chaque joueur

        printf("Joueur %d : %s, Position initiale : %d, Couleur : %d\n", i + 1, joueurs[i].nom, joueurs[i].position, joueurs[i].couleur);
    }
}
#include <stdio.h>

int menu() {
    int choix;
    do {
        printf("Le menu est le suivant : \n");
        printf("1. Si vous souhaitez voir les regles du jeu. \n");
        printf("2. Si vous souhaitez jouer.\n");
        printf("3. Si vous souhaitez quitter");
        scanf("%d", &choix);
        if (choix < 1 || choix > 3) {
            printf("Erreur, choissiez soit 1, soit 2, soit 3.\n");
        }
    } while (choix < 1  || choix > 3);
    return choix;
}

int regle_jeu() {
    printf("Dans le jeu Quoridor, l'objectif est de traverser le plateau et atteindre le côté opposé avant son adversaire. Chaque joueur commence avec son pion placé sur la ligne centrale de son côté du plateau. À chaque tour, un joueur peut choisir entre deux actions : déplacer son pion d'une case dans l'une des quatre directions possibles (haut, bas, gauche ou droite) ou poser un mur pour bloquer son adversaire. Les murs couvrent deux cases contiguës et peuvent être placés soit horizontalement, soit verticalement, mais ne doivent pas complètement bloquer un joueur, ce qui signifierait qu'il n'aurait plus aucun chemin possible vers l'autre côté. En plus du déplacement normal, un joueur peut sauter par-dessus un pion adverse si celui-ci est adjacent, avançant de deux cases dans la même direction. La stratégie réside dans la gestion des déplacements et des murs, car les joueurs doivent non seulement progresser, mais aussi entraver l'adversaire tout en veillant à ne pas se retrouver soi-même bloqué. La partie se termine lorsqu'un joueur parvient à atteindre l'une des cases de l'extrémité opposée du plateau, sur le côté du joueur adverse.");
    return regle_jeu;
}

int jouer_au_jeu() {
    printf("Faut mettre le code du jeu ici");
    return jouer_au_jeu;
}

int main() {
    int choix;
    int regle;
    int jouer;
    int nombre;
    do {

choix = menu();
if (choix >= 1 && choix < 4) {}
switch (choix) {
   case 1:
       regle = regle_jeu();
   break;
   case 2:
       jouer = jouer_au_jeu();
   break;
   case 3:
       printf("Vous avez quitter \n");
   break;
   default:
       printf("Choix invalide, veuillez reesayer");}
    } while (choix<2 || choix>3);
return 0;
}

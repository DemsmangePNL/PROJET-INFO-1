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

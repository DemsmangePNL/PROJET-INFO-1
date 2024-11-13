


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
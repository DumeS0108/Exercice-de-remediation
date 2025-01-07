#include <stdio.h>

int main() {
    double prix, montantTotal = 0; 
    int quantite;

    printf("Calcul du montant de la facture.\n");
    printf("Entrez un prix négatif pour arrêter la saisie.\n");

    while (1) {
        printf("Prix de l'article : ");
        if (scanf_s("%lf", &prix) != 1) { 
            printf("Erreur : saisie invalide. Veuillez entrer un nombre.\n");
            return 1; 
        }

        if (prix < 0) {
            break; 
        }

        printf("Quantité : ");
        if (scanf_s("%d", &quantite) != 1 || quantite < 0) {
            printf("Erreur : saisie invalide. Veuillez entrer un entier positif.\n");
            return 1; 
        }

        montantTotal += prix * quantite; 
    }

    if (montantTotal > 500) {
        montantTotal *= 0.9;
    }

    if (montantTotal == 0) {
        printf("Aucun article n'a été saisi.\n");
    }
    else {
        printf("Montant total de la facture : %.2f €\n", montantTotal);
    }

    return 0;
}

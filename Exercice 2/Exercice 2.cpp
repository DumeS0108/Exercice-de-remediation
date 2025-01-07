#include <stdio.h>

int main() {
    int note;               
    int compteur = 0;       
    int total_notes = 0;    

    printf("Saisissez les notes des élèves (entre 0 et 20) :\n");
    printf("Pour arrêter, entrez une note inférieure à 0 ou supérieure à 20.\n");

    while (1) {
        printf("Entrez une note : ");
        scanf("%d", &note);

        if (note < 0 || note > 20) {
            printf("Saisie arrêtée. Une note invalide a été entrée.\n");
            break;
        }

        if (note > 10) {
            compteur++;
        }

        total_notes++;
    }

    printf("Nombre de notes saisies : %d\n", total_notes);
    printf("Nombre de notes supérieures à 10 : %d\n", compteur);

    return 0;
}
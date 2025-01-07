#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    int nombreEleves, age, cinemaxMois, restoXmois, pratiqueSport;
    char sexe, prefereResto[10], sport[10];

    printf("Entrez le nombre d'élèves : ");
    scanf("%d", &nombreEleves);

    for (int i = 1; i <= nombreEleves; i++) {
        printf("\nQuestionnaire pour l'élève %d\n", i);

        // Entrer l'âge
        printf("Quel est votre âge ? ");
        scanf("%d", &age);

        // Entrer le sexe
        printf("Quel est votre sexe (H/F) ? ");
        scanf(" %c", &sexe); 

        // Entrer le nombre de fois où l'élève va au cinéma par mois
        printf("Combien de fois allez-vous au cinéma par mois ? ");
        scanf("%d", &cinemaxMois);

        // Préférence de restaurant
        printf("Quel est votre restaurant préféré ? (Quick, MacDo, BK, KFC) : ");
        scanf("%s", prefereResto);

        // Nombre de visites au restaurant par mois
        printf("Combien de fois y allez-vous par mois ? ");
        scanf("%d", &restoXmois);

        // Pratique d'un sport
        printf("Pratiquez-vous un sport ? (1 = Oui, 0 = Non) : ");
        scanf("%d", &pratiqueSport);

        if (pratiqueSport == 1) {
            printf("Quel sport pratiquez-vous ? (foot, tennis, basket, judo, natation) : ");
            scanf("%s", sport);
        }
        else {
            strcpy(sport, "Aucun"); 
        }

        printf("\n*** Récapitulatif pour l'élève %d ***\n", i);
        printf("Âge : %d ans\n", age);
        printf("Sexe : %c\n", sexe);
        printf("Fréquence cinéma : %d fois par mois\n", cinemaxMois);
        printf("Restaurant préféré : %s\n", prefereResto);
        printf("Fréquence restaurant : %d fois par mois\n", restoXmois);
        printf("Sport pratiqué : %s\n", sport);

        printf("\nPassons à l'élève suivant...\n");
    }

    printf("\nQuestionnaire terminé pour tous les élèves.\n");

    return 0;
}

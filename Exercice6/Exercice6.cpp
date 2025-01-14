#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    int nombreEleves, age, cinemaxMois, restoXmois, pratiqueSport;
    char sexe, prefereResto[10], sport[10];

    printf("Entrez le nombre d'eleves : ");
    scanf("%d", &nombreEleves);

    for (int i = 1; i <= nombreEleves; i++) {
        printf("\nQuestionnaire pour l'eleve %d\n", i);

        printf("Quel est votre age ? ");
        scanf("%d", &age);

        printf("Quel est votre sexe (H/F) ? ");
        scanf(" %c", &sexe); 

        printf("Combien de fois allez-vous au cinema par mois ? ");
        scanf("%d", &cinemaxMois);

        printf("Quel est votre restaurant prefere ? (Quick, MacDo, BK, KFC) : ");
        scanf("%s", prefereResto);

        printf("Combien de fois y allez-vous par mois ? ");
        scanf("%d", &restoXmois);

        printf("Pratiquez-vous un sport ? (1 = Oui, 0 = Non) : ");
        scanf("%d", &pratiqueSport);

        if (pratiqueSport == 1) {
            printf("Quel sport pratiquez-vous ? (foot, tennis, basket, judo, natation) : ");
            scanf("%s", sport);
        }
        else {
            strcpy(sport, "Aucun"); 
        }

        printf("\n*** Recapitulatif pour l'eleve %d ***\n", i);
        printf("Age : %d ans\n", age);
        printf("Sexe : %c\n", sexe);
        printf("Frequence cinema : %d fois par mois\n", cinemaxMois);
        printf("Restaurant prefere : %s\n", prefereResto);
        printf("Frequence restaurant : %d fois par mois\n", restoXmois);
        printf("Sport pratique : %s\n", sport);

        printf("\nPassons à l'eleve suivant...\n");
    }

    printf("\nQuestionnaire termine pour tous les eleves.\n");

    return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    int a, b, produit = 0;

    printf("Entrez le premier nombre (a) : ");
    scanf("%d", &a);
    printf("Entrez le deuxième nombre (b) : ");
    scanf("%d", &b);

    int positif = (b > 0);          
    int abs_b = positif ? b : -b;   

    for (int i = 0; i < abs_b; i++) {
        produit += a;               
    }

    if (!positif) {
        produit = -produit;
    }

    printf("Le produit de %d et %d est : %d\n", a, b, produit);

    return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a, b, c, temp;

    printf("Entrez le premier nombre : ");
    scanf("%d", &a);

    printf("Entrez le deuxième nombre : ");
    scanf("%d", &b);

    printf("Entrez le troisième nombre : ");
    scanf("%d", &c);

    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }

    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    printf("Les nombres dans l'ordre croissant sont : %d, %d, %d\n", a, b, c);

    return 0;
}


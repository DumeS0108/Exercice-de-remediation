#include <stdio.h>
#include <stdlib.h> 
#include <time.h>   

int main() {
    int notes[30];        
    int somme = 0;        
    float moyenne;        

    srand(time(NULL));

    printf("Les 30 notes générées aléatoirement sont :\n");

    for (int i = 0; i < 30; i++) {
        notes[i] = rand() % 21; 
        printf("Note %d : %d\n", i + 1, notes[i]);
        somme += notes[i];
    }

    moyenne = (float)somme / 30;

    printf("\nLa moyenne des 30 notes est : %.2f\n", moyenne);

    return 0;
}

// Dati tre interi, stampare il massimo usando if-else.

#include <stdio.h>

int main (void) {

    int integer1 = 0;
    int integer2 = 0;
    int integer3 = 0;


    printf ("Inserisci il primo numero ");
    scanf ("%d", &integer1);

    printf ("Inserisci il secondo numero ");
    scanf ("%d", &integer2);

    printf ("Inserisci il terzo numero ");
    scanf ("%d", &integer3);
    
    int max;

    if (integer1 >= integer2 && integer1 >= integer3)
        max = integer1;
    
    else if (integer2 >= integer3)
        max = integer2;
    
    else
        max = integer3;


    printf("Il numero maggiore è %d\n", max);
}

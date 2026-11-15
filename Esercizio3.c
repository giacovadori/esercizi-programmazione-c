// Dato un intero, stampare se è positivo, negativo o zero. 
// Se è diverso da zero, stampare anche se è pari o dispari.

#include <stdio.h>

int main ( void ) {

    int integer1 = 0;

    printf ("Inserisci il numero ");
    scanf ("%d", &integer1);
    
    if (integer1 > 0)             
        printf ("Positivo\n");

    else    if (integer1 == 0)
        
                printf ("Zero\n");

            if (integer1 < 0)

                printf ("Negativo\n");


    if (integer1 != 0) {

        if (integer1 % 2 == 0)
            printf ("Pari\n");
    
        else
            printf ("Dispari\n");
    }

}
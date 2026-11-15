
#include <stdio.h>

int main ( void ) {
    int integer1 = 0;
    int integer2 = 0;

    printf ("Inserisci il primo numero ");
    scanf ("%d", &integer1);

    printf ("Inserisci il secondo numero ");
    scanf ("%d", &integer2); 

    int sottr = 0;
    sottr = integer1 - integer2;

    printf ("La sottrazione equivale a %d\n", sottr);

}

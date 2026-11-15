// Dati due interi a e b, scrivere una condizione vera se esattamente uno dei due è positivo.

#include <stdio.h>
int main ( void ) {

    int a = -1 , b = -3; 

    if ((a > 0 && b <= 0) || (a <= 0 && b > 0))

    printf ("V\n");

    else 
    printf("F\n");

    return 0;
}

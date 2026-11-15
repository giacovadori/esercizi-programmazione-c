// Dato un intero x, scrivere una condizione vera se x è nell’intervallo [10, 20], estremi inclusi. Scrivere anche la negazione.

 #include <stdio.h>
 int main ( void ) {
    int x = 10;
    if (x >= 10 && x <= 20)
    
    printf ("V\n");
    
    else 
    if  (x<10 || x>20)
    
    printf ("F\n");
    
    return 0; 
}

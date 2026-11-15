// Dato un voto intero, stampare non valido se è fuori da [0, 30],insufficiente se è minore di 18, sufficiente altrimenti.

#include <stdio.h>

int main (void) {
    char risposta;

    printf ("Hai svolto l'esame? (s/n): ");
    scanf ("%c", &risposta);
    
    if (risposta == 's') {

    int voto;

        printf("Che voto hai preso? ");
        scanf("%d", &voto);

    if ((voto > 30) || (voto < 0))
    printf("Voto non valido\n");
    else if (voto >= 18)
    printf("Hai superato l'esame!\n");
    else 
        printf("Non hai superato l'esame\n");
    
    }
    else
        printf("Provalo, lo puoi passare!\n");

return 0;
}
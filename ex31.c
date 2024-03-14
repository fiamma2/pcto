#include <stdio.h>

double squareRoot(double numero) 
{
    double radice = numero / 2; // Inizializza una stima della radice

    // Continua ad aggiornare la stima fino a quando non si raggiunge un'approssimazione accettabile
    while ((radice - (numero / radice)) >= 0.0001) {
        radice = (radice + (numero / radice)) / 2;
    }

    return radice;
}

int main() {
    double numero;

    printf("Inserisci un numero: ");
    scanf("%lf", &numero);

    // Calcola la radice quadrata utilizzando la funzione definita sopra
    double radice = squareRoot(numero);

    printf("La radice quadrata di %.2lf è approssimativamente %.4lf\n", numero, radice);

    return 0;
}
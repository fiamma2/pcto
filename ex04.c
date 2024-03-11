#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    int d; 
    int numero=5;
    int numero1=3;
    int somma;
    int moltiplicazione;
    int moltiplicazione1;
    printf("inserisci un numero \n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    moltiplicazione1 = a*numero1;
    moltiplicazione = b*numero;
    printf("numeri inseriti %d %d\n", moltiplicazione1, moltiplicazione);
    somma = a*numero1 + b*numero + c + d;
    printf("numeri inseriti %d\n", somma);
}
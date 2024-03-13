#include <stdio.h>

int somma(int a, int b)
{
    int somma;
    somma=a+b;
    return somma;
}
int main()
{
    int risultato=somma(5,7);
    printf("%d\n", risultato);
}
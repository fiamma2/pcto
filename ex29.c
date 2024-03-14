#include <stdio.h>

double somma(double a, double b)
{
    double somma;
    somma=a+b;
    return r1;
}
double differenza(double a, double b)
{
    double differenza;
    differenza=a-b;
    return r2;
}
double divisione(double a, double b )
{
    double divisione;
    divisione= a/b;
    return r3;
} 
double moltipllicazione(double a, double b)
{
    double moltiplicazione;
    moltiplicazione= a*b;
    return r4;
}
double main()
{
    double risultato s=somma(8,5);
    printf("%lf\n", risultato s);

    double risultato d= differenza(5,7);
    printf("%lf\n", risultato d);

    double risultato div=(5,7);
    printf("%lf\n", risultato div);

    double risultato m= moltiplicazione(5,7);
    printf("%lf\n", risultato m);
}
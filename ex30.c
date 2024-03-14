#include <stdio.h>

double (double a, double b, double c)
{
    double somma;
    somma=a+b+c;
    return somma;
}

double area(double a, double b, double c)
{
    double area;
    double semiperimetro = (a+b+c) / 2;
    area = (semiperimetro) * (semiperimetro-a) * (semiperimetro-b) * (semiperimetro-c);
}

double sqrt(double x)
{
    double area;
    area = area(double a, double b, double c);
    x = 0;
    while(area >= x*x)
    {
        if(area == 0)
        {
            x=1;
        }
        else if(area == 1)
        {
            x = 1;
        }
        else if (area < 0)
        {
            printf("errore");
        }
        else
        {
            x += 0.0001;
        }
    }
}

double main()
{
    double a;
    double b;
    double c;
    printf("inserisci i valori dei lati del trangolo ");
    scanf("%lf %lf %lf", &a, &b, &c);
    double perimetro = somma(a, b, c);
    printf("il perimetro del traingolo é %lf\n", perimetro);
    double risultato_area = area(a, b, c);
    double area_finale = squareRoot(area);

    printf("La radice quadrata di %.2lf è approssimativamente %.4lf\n", area, area_finale);

    return 0;
   
}

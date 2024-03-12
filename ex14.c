#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    scanf("%d %d %d", &a, &b, &c);
    if((a+b>c) && (a+c>b) && (b+c>a))
{
    printf("sono le lunghezze di un triangolo\n"); 
}
else
{
    printf("non sono le lunghezze di un triangolo\n");
}
}
#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    printf("ïnserisci un numero \n");
    scanf("%d %d %d", &a, &b, &c); 
    printf("numeri inseriti %d %d %d\n", a+b, b+c, c+a);
}
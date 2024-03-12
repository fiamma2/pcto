#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    if(a>10)
{
    printf("a é maggiore di 10\n"); 
}
else if(a == 5)
{
    printf("a é uguale a 5\n");
}
else if(a>5)
{ 
    printf("a é maggiore di 5\n");
}
else
{
    printf("a é minore di 5\n");
}
}
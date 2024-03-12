#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    scanf("%d %d %d", &a, &b, &c);
   
    if((a == b) && (b == c))
{
    printf("il traingolo é equilatero\n"); 
}
else if((a == b && a != c) || (b == c && b != a) || (a == c && c != b) )
{
    printf("il triangolo é isoscele\n");
}
else 
{
    printf("il triangolo é scaleno\n");
}
}
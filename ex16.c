#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
   
    if(a == 1969)
{
    printf("é nato l'anno in cui l'uomo é andato sulla luna\n"); 
}
else if(a<1969)
{
    printf("é nato %d anni prima\n", 1969-a);
}
else if(a>1969)
{
    printf("é nato %d anni dopo\n", a-1969);
}
}
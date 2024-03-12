#include <stdio.h>

int main()
{
    int d;
    scanf("%d", &d);
while(d>0)
{
if(d>30 && d<51)
{
    printf("il prezzo é %d\n", (5*d)-(5*d*0.1)); 
}
else if(d>50)
{
    printf("il prezzo é %d\n", (5*d)-(5*d*0.15));
}
else
{
    printf("il prezzo é %d\n", 5*d);
}
}
}

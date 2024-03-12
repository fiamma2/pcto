#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
   
    if(a/400 == 0)
{
    printf("é bisestile\n"); 
}
else if((a/4 == 0) && (a/100 != 0))
{
    printf("é bisestile\n");
}
else
{
    printf("non é bisestile\n");
}
}
#include <stdio.h>

int main()
{
    int a;
    printf("dato un qwualsiasi numero");
    scanf("%d", &a);
    int n=a-1;
    int c=0;
    while(n>1)
{
    if(a%n==0)
    {
    c=c+1;
    }
n--;
}
if(c==0)
{
    printf("il numero é primo\n");
}
else
{
    printf("il numero non é primo");
}

}
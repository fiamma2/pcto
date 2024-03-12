#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    scanf("%d %d %d", &a, &b, &c);
   
    if(b-a == c-b)
{
    printf("i 3 numeri sono in successione\n"); 
}
else
{
    printf("i 3 numeri non sono in successione\n");
}
}
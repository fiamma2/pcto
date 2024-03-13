#include <stdio.h>

int main()
{
    {
    int a[5]={3,18,17,21,150};
    int b=0;
    printf("%d\n", a[4]);
    while(b<5)
    {
        printf("%d\n", a[b]);
        b=b+1;
    }
    }
    {
        int a=1;
        while(a<=100)
        {
            printf("%d\n", a);
            a=a+1;
        }
    }
    {
        char a[5]={'c', 'i','a','o', '\0'};
        int b=0;
        while(b<=4)
        printf("%c", a[b]);
        b=b+1;
    }
    {
        while(a[b]!='\0')
        printf("%c", a[b]);
        b=b+1;
    }
    printf("\n");
}
#include <stdio.h>

int main()
{
    int a[5]={5,3,8,6,12};
    int c = 0;
    int c2 = 1;
    int temp;
    int b=1;
    int f = 0;
 
    while(b>0)
    {
        b=0;
        c=0;
        c2=1;

        while(c2<5)
        {
            if(a[c] > a[c2])
            {
                temp = a[c];
                a[c] = a[c2];
                a[c2] = temp;
                b = b+1;
            }
            c = c+1;
            c2 = c2+1;
        }
    }
    while(f < 5)
    {
        printf("%d\n", a[f]);
        f = f + 1;
    }

}
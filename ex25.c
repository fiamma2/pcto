#include <stdio.h>

int main()
{
    int contatore=0;
    int comparatore=0;
    int posizione=0;
    int a[5]={12, 5, 9, 7, 15};

    while(comparatore<=5)
    {
        while(posizione<=4)
        {
            if(a[posizione] == contatore)
            {
                printf("%d\n", contatore);
                comparatore++;
                posizione++;
            }
            else
            {
                posizione ++;
            }
        
        }
        posizione = 0;
        contatore++;
    }
}
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i,k=65,j;

    for(i=1;i<=5;i++,printf("\n"))
    {
        for(j=1;j<=5-i;j++)
            printf(" ");
        for(j=1;j<=i;j++)
        {
            printf("%c",k);
            k++;
        }   
    }

    return 0;
}
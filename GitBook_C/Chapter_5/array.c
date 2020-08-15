#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
char stringArray[20][10];
char temp;
int i,j,set_m,a,k;

    for(i=0; i<9;++i)
    {
        scanf("%d",&a);
        for(j= 0 ;j<a;++j)
        {
            scanf(" %s",&temp);
                stringArray[i][j] = temp;
        }
    }    
    
   
    
    for (i=0;i<9;++i)
    {
        printf(" %s",stringArray[i]);

    }
    printf("\n");
    printf(" %s\n",stringArray[2]);
}
#include <stdio.h>
#include <stdlib.h>

int main()
{   
    int i,j,k=1;
    int a[10][10]={{0}};
    int b[10][10]={{0}};
    int R,C;
    printf("¿é¤J°}¦Crow,col\n");
    scanf("%d %d",&R,&C);
    for(i=0;i<R;i++)
        for(j=0;j<C;j++)
        {
            a[i][j]=k++;
        }
    printf("before >>");
    for(i=0;i<R;i++)
    {
        printf("\n");
    for(j=0;j<C;j++)
        {
            printf(" %d",a[i][j]);
        }
    } 

    printf("\nafter >>");
    for(i=0;i<R;i++)
        for(j=0;j<C;j++)
        {
           b[j][i]= a[i][j];
        }
    for(i=0;i<R;i++)
    {
        printf("\n");
    for(j=0;j<C;j++)
        {
            printf(" %d",b[i][j]);
        }
    } 
    
    return 0;
}

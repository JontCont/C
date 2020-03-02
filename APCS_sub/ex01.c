#include <stdlib.h>
#include <stdio.h>

int main()
{
    int k=4;
    int m=1;
    for(int i =1;i<=5;i+=1){
        for (int j = 1; j <=k; j+=1)
        {
            printf(" ");
        }
        for(int j=1;j<=m;j+=1)
        {
            printf("*");
        }
        printf("\n");
        k-=1;
        m+=2;
    }
}
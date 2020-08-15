#include "sort.h"

void sort(int t[])
{
    int i,j,temp;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
            if(t[i]>t[j])
            {
                temp=t[i];
                t[i]=t[j];
                t[j]=temp;
            }
    }
    for(i = 0;i<5;i++)
        printf("%d",t[i]);
}
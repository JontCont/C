#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "Sort.h"

int main()
{
    
    int a[10];
    for(int i =0 ;i<10;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(a[i]>a[j])
            {
                swap(&a[i],&a[j]);
            }
        }
    }   
    for(int i =0 ;i<10;i++)
    {
        printf("%d ",a[i]);
    }
}
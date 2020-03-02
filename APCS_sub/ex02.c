#include <stdlib.h>
#include <stdio.h>

int f(int a[],int n);

int main()
{
    int a[]={1,3,9,2,5,8,4,9,6,7};
    
    printf("%d",f(a,10));
    return 0; 
}

int f(int a[],int n)
{
    int index = 0 ;
    for(int i =1;i<=n-1;i++)
    {
        if(a[i]>= a[index]) index=i;
        
    }
    return index;
}
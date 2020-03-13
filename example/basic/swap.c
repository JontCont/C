#include <stdlib.h>
#include <stdio.h>
void swap(int *,int *);

int main()
{
    int i=4,j=1;

    swap(&i,&j);
    printf("i %d , j %d",i,j);
}
void swap(int *p1,int *p2)
{
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
}
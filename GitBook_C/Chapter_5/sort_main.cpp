#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

int main()
{
    int data[5]={0};
    printf("sort example¡G");
    for(int i = 0 ; i < 5 ; i++)
        scanf("%d",data[i]);
    sort(data);
    return 0;
}
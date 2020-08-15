#include <stdlib.h>
#include <stdio.h>

int main()
{
    int option;
    printf("My example menu : \n");
    printf("1. ex01\n");
    printf("2. ex02\n");
    printf("3. ex03\n");
    printf("--------------------------\n");
    scanf("%d",&option);

    switch (option)
    {
        case 1: Ex01();break;
        case 2: printf("ex02 >> not data ... \n");break;
        case 3: printf("ex03 >>not data ...\n");break;
        default: printf("not data ...\n"); break;
    }
    
    return 0;
}

void Ex01()
{
    int i=20,j=30,k=10;
    int temp;
    printf("before : %d %d %d\n",i,j,k);
    if(i>j)
    {
        temp = i;
        i = j;
        j = temp;
    }
    if(j>k)
    {
        temp = j;
        j = k;
        k = temp;
        if(i>j)
        {
            temp = i;
            i = j;
            j = temp;
        }
    }   

    printf("after : %d %d %d",i,j,k);
}
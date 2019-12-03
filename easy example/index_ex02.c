#include <stdio.h>

int main()
{
    int i,j;
    int *ptr =NULL;
    int *ptr1 =&i;
    i =1;j=2;ptr = &j;
    printf("i    =%8d address=%p\n",i,&i);
    printf("j    =%8d address=%p\n",j,&j);
    printf("/-------------------------------/\n");
    printf("ptr  =%p address=%p\n",ptr,&ptr);
    printf("*ptr =%p address=%p is value\n",ptr,*ptr);
    printf("/-------------------------------/\n");
    printf("ptr1 =%p address=%p\n",ptr1,&ptr1);
    printf("*ptr1=%p address=%p is value\n",ptr1,*ptr1);
}
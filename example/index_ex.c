#include <stdio.h>

int main()
{
    int i=5;
    int *ptr =&i,**ptr1 =&ptr,***ptr2 =&ptr1;

    printf("i    =%8d address=%p\n",i,&i);
    printf("ptr  =%p address=%p\n",ptr,&ptr);
    printf("ptr1 =%p address=%p\n",ptr1,&ptr1);
    printf("ptr2 =%p address=%p\n",ptr2,&ptr2);
}
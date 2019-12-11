#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define index 5


int main(int argc, char const *argv[])
{
    int i ,j;
    int array[index] = {0,1,2,3,4};
    int *ptr = array;
    int *ptr1;

    for(i =0 ; i < index ; i++)
        printf("array[%d] = %d address = %p\n",i,array[i],ptr+i);
    printf("inital..");
    ptr1 = ptr;
    printf("ptr =%p(=%d) ptr1 =%p(=%d) \n",ptr,*ptr,ptr1,*ptr1);

    ptr1 +=5;
    printf("ptr1 = ptr + 5 : ");
    printf("ptr =%p(=%d) ptr1 =%p(=%d) \n",ptr,*ptr,ptr1,*ptr1);

    ptr1 = &array[index-1];
    printf("指向最後元素：");
    printf("ptr =%p(=%d) ptr1 =%p(=%d) \n",ptr,*ptr,ptr1,*ptr1);
    
    ptr1 -=3;
    printf("ptr1 = ptr + 5 : ");
    printf("ptr =%p(=%d) ptr1 =%p(=%d) \n",ptr,*ptr,ptr1,*ptr1);

    i = ptr1 -ptr ; 
    j = ptr -ptr1 ;

    printf("ptr1-ptr =%d\n",i);printf("ptr-ptr1 =%d\n",j);

    ptr = array ; 
    printf("ptr = %p(= %d) ptr1 = %p(= %d)\n",ptr,*ptr,ptr1,*ptr1);

    int temp;
    for(i =0 ; i <index && ptr1>ptr;i++)
        if(ptr1 >ptr)
        {
            temp= *ptr1;
            *ptr1 = *ptr ;
            *ptr = temp;
            ptr++;ptr1--;
        }
    ptr = &array[0];
    for(i =0 ; i<index ; i++)
        printf("array[%d] =%d address= %p \n",i,array[i],ptr+1);
    getchar();
}

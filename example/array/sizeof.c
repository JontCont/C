#include <stdlib.h>
#include <stdio.h>


int main()
{
    int a[]={1,4,5,3,6,5,4,9,10,11};
    int num = sizeof(a)/ sizeof(a[0]);
    printf("所佔用的空間 : %d , 取得陣列的大小 : %d",sizeof(a),num);
    
}
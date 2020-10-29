#include <stdlib.h>
#include <stdio.h>

int main(){
    int usrNum; //使用者
    int split[100]= {0};
    int splitNum=10;
    int index = 0; 
    usrNum=263541; 
    printf("enter number :%d\n",usrNum);
    // scanf("%d",&usrNum);   
    
    while (usrNum!=0)
    {
        split[index++] = usrNum % splitNum;
        usrNum /= splitNum;
        
    }


    return 0;
}
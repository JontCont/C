#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int X[4] ={0};
int Fx[4] ={0};
float PSx[4]={0};
int set[4] ={0};
int avg=0;
    

void InputNum()
{
    int num;
    //printf("enter amount : ");
    //scanf("%d",num);
    printf("enter State Number : ");    
    for(int i=0;i<4; i++)
    {
        scanf("%d",&X[i]);
        Fx[i] = X[i]*X[i]-2*X[i]+5;
        avg +=Fx[i];
    }
    avg/= 4;
    int j=0;
    for(int i=0;i<4;i++)
    {
        PSx[i] = Fx[i] /avg;
        set[i]=PSx[i]+0.5;
        if(set[i]>0) j+=set[i];
        //if(j>4) {set[i]=1;}
    }
}


int main()
{
    InputNum();
    
    return 0;
}

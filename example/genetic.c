#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int fx(int);
float psx(int,int);
int main()
{
    int X[4] ={0};
    int Fx[4] ={0};
    float PSx[4]={0};
    int set[4] ={0};
    int sum=0;
    for(int i=0;i<4;i++) 
    {
        scanf("%d",&X[i]);
        Fx[i]= fx(X[i]);
        sum+=Fx[i];
    }
    int ave=sum/4;
    int points1,points2;
    int nubmer1,bit1;
    int nubmer2,bit2;
    printf("Crossover Points:");
    scanf("%d %d", &points1,&points2);
    printf("1. nubmer and bit :");
    scanf("%d %d", &nubmer1,&bit1);
    printf("2. nubmer and bit :");
    scanf("%d %d", &nubmer2,&bit2);
    int set_s=0;
    for(int i=0;i<4;i++) 
    {
        PSx[i] = psx(Fx[i],ave);
        set[i]=PSx[i]+0.5;
        set_s+=set[i];
        if(set_s>4) {set[i]=1;}
    }
//---------------------------------//
int newx[4]={0};
   for(int n =0;n<4;n++)
   {
        switch (set[n])
        {
            case 0:
                if(n==0) newx[n]=X[n+1];
                else newx[n]=X[n-1];
            break;
            case 1:
                if(newx[n] ==0) newx[n]=X[n];
                break;
            case 2:
                if(n%2==0)
                {
                    newx[n]=X[n];
                    newx[n+1]=X[n];
                }
                if(n%2==1)
                {
                    newx[n]=X[n];
                    newx[n-1]=X[n];
                }
            break;
        }
    }
//------------------------------//
    printData(X,Fx,PSx,set,newx);
    binary(newx,points1,points2,nubmer1,bit1,nubmer2,bit2);
    printf("average : %d \n",ave);
    //system("PAUSE");
    return 0;
}

void binary(int *newx,
int points1,int points2,
int nubmer1,int bit1,
int nubmer2,int bit2
)
{
    int newX[4][5]={0};
    for(int i=0;i<4;i++)
    {
       int temp =newx[i];
       for(int j=4;j>=0;j--)
       {
         newX[i][j] = temp%2;
         temp=temp/2;
       } 
    }

    for(int i=0;i<4;i++)
    {
        printf("newX:  ");
       for(int j=0;j<5;j++)
         printf(" %d",newX[i][j]);
       printf("\n");
    }
    points1=5-points1;
    points2=5-points2;
    if(newX[0][points1]!=newX[1][points1])
    {
        if(newX[0][points1]==0) 
        {
            newX[0][points1]=1;
            newX[1][points1]=0;
        }
        else
        {
            newX[0][points1]=0;
            newX[1][points1]=1; 
        }
    }

    if(newX[2][points2]!=newX[3][points2])
    {
        if(newX[2][points2]==0) 
        {
            newX[2][points2]=1;
            newX[3][points2]=0;
        }
        else
        {
            newX[2][points2]=0;
            newX[3][points2]=1; 
        }
    }

    for(int i=0;i<4;i++)
    {
        printf("交換後 :");
       for(int j=0;j<5;j++)
       {
         printf(" %d",newX[i][j]);
       } 
       printf("\n");
    }
    printf("\n");
    bit1=4-bit1;
    bit2=4-bit2;
    nubmer1--;nubmer2--;
    if(nubmer1<=0) nubmer1=0;
    if(nubmer2<=0) nubmer2=0;
    if(newX[nubmer1][bit1]==1) newX[nubmer1][bit1]=0;
    else newX[nubmer1][bit1]=1;
    if(newX[nubmer2][bit2]==1) newX[nubmer2][bit2]=0;
    else newX[nubmer2][bit2]=1;
        
    
    for(int i=0;i<4;i++)
    {
        printf("突變後 :");
       for(int j=0;j<5;j++)
       {
         printf(" %d",newX[i][j]);
       } 
       printf("\n");
    }
}



float psx(int f,int ave)
{
    float ans=0;
    for(int i=0;i<4;i++)
    {
       return ans=(float)f/ave;
    }
}

int fx(int x)
{
    int fx;
    for(int i=0;i<4;i++) 
        return fx= x*x-2*x+5;
}

void printData(int *x,int *fx,float *psx,int *set,int *newx)
{
    for (int i = 0; i < 4; i++)
    {
        printf("x:%-5d fx:%-5d psx:%-5.2f set:%-3d ",x[i],fx[i], psx[i],set[i]);
        printf("newX: %-6d\n",newx[i]);
    }
    
}
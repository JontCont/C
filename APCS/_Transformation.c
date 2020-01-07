#include<stdio.h>
#include <stdlib.h>

int a[10][10]={{0}};
int b[10][10]={{0}};
int temp=0;
void rotate(int R,int C)
{
    for(int x=0;x<R;++x)
    {
        for(int y=0;y<C;++y)
            b[x][y]=a[y][R-x-1];
    }
    for(int x=0;x<R;++x)
    {
        for(int y=0;y<C;++y)
            a[x][y]=b[x][y];        
    }
}

void mirror(int R,int C)
{
    for(int x=0;x<R/2;++x)
    {
        for(int y=0;y<C;++y)
        {
            temp=a[x][y];
            a[x][y]=a[R-x-1][y];
            a[R-x-1][y]=temp;
        }
    }
}

int main()
{
    int R,C,M;
    int i,j;
    int option[10]={0};
    scanf("%d %d %d",&R,&C,&M);
    for(i=0;i<R;++i)
        for(j=0;j<C;++j)    
            scanf(" %d",&a[i][j]);
    //-------------------------//
    for(i=0;i<M;i++)
        scanf(" %d",&option[i]);     
    //---------------------//
    for(i=M-1;i>=0;i--)
    {
        if(option[i]==0) 
        {   
            temp=C;C=R;R=temp;
            rotate(R,C);
        }
        else  mirror(R,C);   
    }
    //-----------------------//
        printf("\n%d %d",R,C);

    for(int x=0;x<R;++x)
    {
        printf("\n");
        for(int y=0;y<C;++y)
        {
            if(y!=0)printf(" ");
            printf("%d",a[x][y]);
        }
    }
    
}
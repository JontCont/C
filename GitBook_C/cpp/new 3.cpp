#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#define Rows  3
int sol[3][3]={{1,2,3},{8,0,4},{7,6,5}};
int topic_data[Rows][Rows]={0};
int count=0;
int row,col;


void bfs(int (*data)[Rows])
{

    if(sol==data) printf("ok");
    
    
}

int main()
{
    int num=1;
    int data=0;
    //printf("enter a rows (ex:3x3,rows=3) >> ");
    //scanf("%d",&rows);
    printf("enter a data (ex:163082457) >> ");
    scanf("%d",&data);
    
    for(int i=Rows-1;i>=0 ;i--)
    {
        for(int j=Rows-1;j>=0 ;j--)
        {
            int temp =data / num % 10;
            topic_data[i][j]=temp;
            num*=10;
            if(temp==0) 
            {
                row=j;
                col=i;
            }
        }
    }
    
    bfs(topic_data);
    system("pause");
    return 0;
}
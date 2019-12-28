#include<stdio.h>

int main()
{
    int num=0;
    int line[10000][2]={{0}};
    int i=0,j;
    scanf("%d",&num);
    for(i=0;i<num;++i)
    {
        scanf(" %d %d",&line[i][0],&line[i][1]);

        for(j=0;j<i;++j)
        {
            if(line[i][0]<line[j][0])
            {
                int temp[2]={line[i][0],line[i][1]};
                for(int k=i;k>j;--k)
                {
                    line[k][0]=line[k-1][0];
                    line[k][1]=line[k-1][1];
                }
                line[j][0]=temp[0];
                line[j][1]=temp[1];
                break;
            }
        }
    }


    return 0;
}
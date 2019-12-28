#include<stdio.h>

int main()
{
    int n=0;
    int line[10000][2]={{0}};
    int i,j;
    scanf(" %d",&n);

    for(i=0;i<n;++i)
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

    int start=line[0][0],end=line[0][1];
    int length=0;
    for(i=1;i<n;++i)
    {
        if(line[i][0]<=end)
            if(line[i][1]>end)end=line[i][1];
        else
        {
           
            length+=(end-start);
            start=line[i][0];
            end=line[i][1];
        }
    }
    length+=(end-start);
    printf("%d",length);

    return 0;
}
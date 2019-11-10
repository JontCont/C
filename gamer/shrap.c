#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
    char pic[2]={'o','x'};
    int pos[3][3]={{-1,-1,-1},{-1,-1,-1},{-1,-1,-1}};

    int row,col;
    int num=1;
    int i,j,k;
    int over =0;
    printf("-----The # gamer-----");
    printf(" 0  1  2 \n");
    printf("0  |  |  \n");
    printf("---------\n");
    printf("1  |  |  \n");
    printf("---------\n");
    printf("2  |  |  \n");

    while (1)
    {
        for(i=0 ; i <2 ; i++)
        {
            printf("The first person is O,Followed by X");
            printf("The first %d personal selection %s",i+1,pic[i]);
            printf("row / col (row or col  = 0 or 1 or 2 )");
            scanf("%d",&row);
            scanf("%d",&col);
            if(!(row>=0 && row<= 2 && col>=0 && col<=2 ))
            {
                printf("No %d ,%d position pls enter again >>",row,col);
                i--;
                continue;               
            }
            if(pos[row][col]!=-1)
            {
                printf("position %d ,%d is presence pls enter again >>",row,col);
                i--;
                continue;
            }
            pos[row][col]=i;
 /*           system("cls");

            printf("-----The # gamer-----");
            printf("-----0  1  2 -----\n");
            for(j=0;j<5;j++)
            {
                if(j%2 ==0 )
                    printf("%d",j/2);
                else
                    printf(" ");
                for (k = 0; k < 5; k++)
                {
                    if(j%2 ==0 && k%2==0)
                    {
                        if(pos[j/2][k/2]!=-1)
                            printf("%s",pic[pos[j/2][k/2]]);
                        else
                            printf(" ");
                    }
                    else if (j%2 !=0)
                       printf("-");
                    else if (k%2 !=0)
                       printf("|");
                }
            }
            for(j=0;j<3;j++)
                if(pos[j][0]!=-1)
                if(pos[j][0]==pos[j][1] && pos[j][1]==pos[j][2])
                {
                    printf("win : %s",pos[j][0]+1);
                    over =1;break;
                }
                if(over==1)break;

                for(j=0 ; j<3;j++)
                    if(pos[0][j]!=-1)
                    if(pos[0][j]==pos[1][j] && pos[1][j]==pos[2][j])
                    {
                    printf("win : %s",pos[j][0]+1);
                    over =1;break;
                    }
                if(over==1)break;

                if(pos[0][0]!=-1)
                    if(pos[0][0]==pos[1][1] && pos[1][1]==pos[2][2])
                    {
                        printf("win : %s",pos[j][0]+1);
                        over =1;break;
                    }
                if(pos[0][2]!=-1)
                    if(pos[0][2]==pos[1][1] && pos[1][1]==pos[2][0])
                    {
                        printf("win : %s",pos[j][0]+1);
                        over =1;break;
                    }
                num++;

                if(num ==10)
                {
                    printf("drew");
                    over =0;
                    break;
                }*/
        }
        if(over ==1) break;
    }
	system("pause");
	return 0;
}

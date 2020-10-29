/*
第 3 題 線段覆蓋長度
問題描述
給定一維座標上一些線段，求這些線段所覆蓋的長度，注意，重疊的部分只能算一
次。例如給定三個線段：(5, 6)、(1, 2)、(4, 8)、和(7, 9)，如下圖，線段覆蓋長度為
6。
輸入格式：
第一列是一個正整數 N，表示此測試案例有 N 個線段。
接著的 N 列每一列是一個線段的開始端點座標和結束端點座標整數值，開始端點
座標值小於等於結束端點座標值，兩者之間以一個空格區隔。
輸出格式：
輸出其總覆蓋的長度 。
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int line_num;
    scanf("%d",&line_num);
    int i,j,line_stat,line_end;
    int max=0,min=1000;
    int line[1000]={0};
    for(i=0; i < line_num;i++)
    {
        scanf("%d %d",&line_stat,&line_end);
        for(j=line_stat;j<line_end ;j++){line[j]=1;}

        if(line_stat > max) max = line_stat;
        if(line_end > max) max = line_end;
        if(line_stat<min) min = line_stat;
        else if(min > line_end) min = line_end;
    }
    int num=0;
    for(j=min;j<=max;j++){ if(line[j]== 1) num++; }
    if(max==min){printf("0");}
    else {printf("%d \n",num);}
}
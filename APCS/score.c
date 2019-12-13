/*
成績指標
	問題描述
		一次考試中 於所有及格學生中獲取最低分數者最為幸運，反之，於所有不及格同
		學中，獲取最高分數者，可以說是最為不幸，而此二種分數，可以視為成績指標 。
		請你設計一支程式，讀入全班成績 人數不固定 請對所有分數進行排序，並分別
		找出不及格中最高分數以及及格中最低分數 。
		當找不到最低及格分數，表示對於本次考試而言，這是一個不幸之班級，此時請你
		印出：「 worst case 」；反之，當找不到最高不及格分數時，請你印出「 best case 」。
	註：假設及格分數為60 每筆測資皆為 0~1 00 間整數，且筆數未定。

輸入格式
	第一行輸入
		學生人 數，第二行 為 各 學生 分數 (0~100 間 ))，分數與分數之間 以一個空白間格。 
		每一筆測資的學生人數為 1 20 的整數。

輸出格式
	每筆測資輸出三行。
	第一行
		由小而大印出所有成績，兩數字之間以一個空白間格，最後一個數字後無空白
	第二行 
		印出 最高不及格分數 如果 全數及格時，於此行印出 best case
	第三行
		印出最低及格分數，當全數不及格時，於此行印出 worst case 。
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int round,score[20],i,j,temp;
	printf("enter people >>");
	scanf("%d",&round);
	printf("enter score >>");
	for(i=0;i<round ; i++)
		scanf("%d",&score[i]);

	for(i=0;i<round;i++)
		for(j=i+1;j<round;j++)
			if(score[i]>score[j])
			{
				temp = score[i];
				score[i]=score[j];
				score[j]=temp;
			}
	for(i = 0 ; i<round;i++)
		printf("%d ",score[i]);

	int first=0,second=0,flag_1=0,flag_2=0;
	for(i = 0 ; i < round ;i++)
		if(score[i]<60)
		{
			first = score[i];
			flag_1 = 1;
		}
		else if(score[i]>=60)
		{
			second =score[i];
			flag_2 = 1;
			break;
		}

	if(flag_1 == 1 && flag_2 == 1)
	{
		printf("\n%d ",first);
		printf("\n%d",second);
	}	
	else 
	{
		if(second >= 60)
		{
			printf("\n%d",second);
			printf("\nbest case");
		}
		else
		{
			printf("\n%d",first);
			printf("\nworst case");
		}
	}
}

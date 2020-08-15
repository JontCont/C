#include <stdlib.h>
#include <stdio.h>
#include "Compare.h"

int main()
{
int i, ans1,ans3,ans4,score[5];  
	double ans2;  
	printf("請輸入五個人的成績:\n");  
	
		for (i=0; i<5; i++)
		{    
			scanf("%d",&score[i]);  
		}  
		
	ans1=sum(score);  
	printf("五個人的成績總和為: %d 分\n",ans1);  
	ans2=avg(score);
	printf("五個人的平均成績為 %.2lf 分\n",ans2);
	ans3=max(score);    
	printf("五個人的最大值為 %d 分\n",ans3);
	ans4=min(score);
	printf("五個人的最小值為 %d 分\n",ans4);

	return 0;
}
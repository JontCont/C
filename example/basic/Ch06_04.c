#include <stdio.h>

void Ch06_04()
{
  char male;       // 是否為男性
  float waist;     // 腰圍

  printf("請問你是男生嗎? (y/n) ");
  scanf("%s",&male);
  
  printf("請問腰圍? ");
  scanf("%f",&waist);
  
  printf("\n");
  if (male=='y')       // 判斷是否為男生 
  {
    if (waist>=90)     // 判斷腰圍是否超過 90 
                       // 判斷結果為真 
      printf("請注意腰圍, 要多運動和均衡飲食!!\n");       
    else               // 判斷結果為假  
      printf("很好, 請繼續保持身材!!\n");     
  }
  else if (male=='n')                 // 女生
  {
    if (waist>=80)     // 判斷腰圍是否超過 80 
                       // 判斷結果為真 
      printf("請注意腰圍, 要多運動和均衡飲食!!\n");       
    else               // 判斷結果為假  
      printf("很好, 請繼續保持身材!!\n");     
  }
  else 
  	printf("data warring");

  //return Ch06_04;
}

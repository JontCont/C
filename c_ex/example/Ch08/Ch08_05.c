#include <stdio.h>
void printResult(float) ; // 原型宣告輸出結果的函式 

int main(void)
{
  int i,height; // i 是性別選項變數, height 是身高 
  float weight; // 計算出來的標準體重 

  do  // 一定要選擇 1 或 2, 否則持續要求選擇男或女 
  {
    printf("性別:(1)男 (2)女\n");
    scanf("%d",&i);  
  } while (i!=1 && i!=2);

  printf("請輸入身高\n");
  scanf("%d",&height);
  if (i == 1)
    weight = (height-80) * 0.7;  // 計算男生的體重 
  else
    weight = (height-70) * 0.6;  // 計算女生的體重 

  // 呼叫函式將計算結果輸出 
  printResult(weight);

  return 0;
}

void printResult(float result)  // 定義輸出結果的函式 
{
  printf("您的標準體重是 %.1f 公斤\n", result);
}

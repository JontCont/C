#include <stdio.h>
float stdWeight(int,int) ; // 體重計算函式 

int main(void)
{
  int i,height;  // i 是性別選項變數, height 是身高 
  float weight;  // 計算結果的體重值 

  do  // 一定要選擇 1 或 2, 否則一直要求選擇男或女 
  {
    printf("性別: (1)男 (2)女\n");
    scanf("%d", &i);  // 選擇計算男生或女生的體重 
  } while (i!=1 && i!=2);
  printf("請輸入身高\n");
  scanf("%d",&height);
  
  // weight 接受 stdweight() 傳回的標準體重值 
  weight = stdWeight(i,height);
  printf("您的標準體重是 %.1f 公斤\n", weight);

  return 0;
}

float stdWeight(int s,int h)  // 標準體重計算函式 
{
  float result;

  if (s == 1)
    result = (h - 80)*0.7;
  else
    result = (h - 70)*0.6;

  return result;
}

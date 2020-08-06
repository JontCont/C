#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char h[32]={0}, w[32]={0}; // 身高體重字串 
  double height,weight;  // 身高體重值 

  printf("===計算身體質量指數===\n");
  printf("請輸入身高 (公分): ");
  scanf("%s",h);
  printf("請輸入體重 (公斤): ");
  scanf("%s",w);
  
  height=atof(h)/100; // 轉成公尺 
  weight=atof(w);
  printf("身體質量指數為 %.2lf", weight/(height*height) );
   
  return 0;
}

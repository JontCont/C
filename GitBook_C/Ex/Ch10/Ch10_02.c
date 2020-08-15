#include <stdio.h>
#include <stdlib.h>
#include <time.h> // 使用 time() 函式需含括此檔 
#define SIZE 6    // 骰子點數的數量 (1~6 點共 6 種) 

int main(void)
{
  int dice[SIZE]={0}; // 初始陣列內所有元素的值都為 0 
  int i, play, point;

  srand((unsigned)time(NULL));      // 取得系統時間
                                    // 並用系統時間來設定亂數種子 
  printf("請輸入骰子投擲次數: ");
  scanf("%d", &play);

  for(i=0;i<play;i++)
  {
    point=rand()%6+1;    // 產生 1~6 間的亂數 
    dice[point-1]++;     // 陣列元素值加 1 
  }

  for(i=0;i<SIZE;i++)
    printf("點數 %d 出現 %d 次\n",i+1,dice[i]);

  return 0;
}

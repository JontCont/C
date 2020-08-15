#include <stdio.h>
#include <stdlib.h>         // 標準函式含括檔 
#include <conio.h>          

int main(void)
{ 
  int seed; // 亂數種子
  int i=0;  //迴圈變數
   
  printf("請輸入亂數種子: ");
  seed=getche();
  srand(seed);                // 設定亂數種子 
  for(i = 0; i < 10;i++ )
  {
    if(i%2==0)  printf("\n"); // 每輸出 2 個就換行 
    printf("%5d  ", rand());  // 產生及輸出亂數 
  }
   
  return 0;
}

#include <stdio.h>

int main(void)
{
  int i=10;

  printf("開始列印下面的字 先換行 \n"); // 特殊字元置於字串後 
  printf("打了一行再換行"); 
  printf("\n");                         // 特殊字元單獨使用 
  printf("也可以這樣\n換行\n");         // 特殊字元置於字串間 
  printf("輸出數值\n%d",i);            // 特殊字元配合輸出變數值 

  return 0;
}

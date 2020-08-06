#include <stdio.h>

int main(void)
{
  printf("請輸入字元:");
  // 用變數來接 getchar() 由鍵盤輸入的字元值 
  char ch = getchar();  
  
  printf("你輸入的字元是 ");
  putchar(ch);

  return 0;
}

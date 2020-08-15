#include <stdio.h>
void showmsg(void);  // 宣告函式 

int main(void)
{
  showmsg();         // 呼叫輸出文字的函式 
  return 0;
}

void showmsg(void)   // 定義函式 
{
  printf("這是一個簡單的函式!!");
}

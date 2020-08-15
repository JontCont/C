#include <stdio.h>

int main(void)
{
  int pos=31 ;      // 控制迴圈的變數 
  int number,value; // 要轉換的數值, 及每次輸出的位元值 
  printf("請輸入整數值: ");
  scanf("%d",&number);
  
  printf("二進位表示: ");
  do
  {
    value=(number>>pos) & 1;    // 將數值左移指定位數後, 再 AND 1 
    putchar(value+48);          // 輸出數值加 48 (也就是數字的 ASCII 碼) 
    if(pos%4==0) putchar(' ');  // 每輸出 4 位數即空一格 
	pos--;
  }  while(pos>=0);             // 持續輸出, 直到 bit 0 為止

  return 0;
}

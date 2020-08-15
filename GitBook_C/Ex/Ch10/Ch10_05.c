#include <stdio.h>

int main(void)
{
  // 用字元陣列儲存十六進位數字中的字元   
  char hex[]={'0','1','2','3','4','5','6','7',
              '8','9','A','B','C','D','E','F'};
  int pos=28 ;      // 控制迴圈的變數 
  int number,value; // 要轉換的數值, 及每次輸出的位元值 
  printf("請輸入整數值: ");
  scanf("%d",&number);
  
  printf("十六進位表示: ");
  for(pos=28;pos>=0;pos-=4)      // 每輪迴圈取 4 個 bit 的值   
  {
    value=(number>>pos) & 0xF;   // 將數值左移指定位數後, 再 AND 0xF
    putchar(hex[value]);         // 用數值當索引, 取得對應的字元
    if(pos%16==0) putchar(' ');  // 每輸出 4 位數即空一格 
  } 

  return 0;
}

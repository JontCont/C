#include <stdio.h>
#include <conio.h>

int main(void)
{
  printf("請輸入一個字元\n");
       // 用變數來接 getche() 由鍵盤輸入的字元值 
  char ch = getche();
  printf("\n輸入的字元為 %c\n", ch);
  
  printf("請再輸入一個字元\n");
  ch = getch();  // 改用 getch() 
  printf("\n輸入的字元為 %c\n", ch);

  return 0;
}

#include <stdio.h>

int main(void)
{
  int number = 74;

  printf("十進位數字 %d\n",number);       // %d 為十進位輸出格式 
  printf("以八進位表示為  %o\n",number); // %o 為八進位輸出格式 
  printf("以十六進位表示為 %x\n",number); // %x 為十六進位輸出格式 

  return 0;
}

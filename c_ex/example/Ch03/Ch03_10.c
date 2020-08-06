#include <stdio.h>

int main(void)
{
  // 10 個字元寬, 未加 - 符號 
  printf("咖啡 %010d 元\n", 125);
  
  // 10 個字元寬, 加上 - 符號
  printf("紅茶 %-010d 元\n", 150);
  printf("果汁 %-010d 元\n", 90);

  return 0;
}

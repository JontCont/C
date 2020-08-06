#include <stdio.h>

void addsum(void);

int main(void)
{
  int i;

  for (i=0;i<3;i++)     // 執行 3 次 addsum() 
    addsum();

  return 0;
}

void addsum(void)
{
  int number=100;       // 內部變數, 有初始值 

  printf("number=%d\n",number++);  // 將數字加 1
}

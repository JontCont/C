#include <stdio.h>

int main(void)
{
  int i;

  for(i=1;i<=10;i++)  // 由 1 到 10 跑 10 次的迴圈 
  {
    if (i==5)    // 迴圈執行到第 5 輪時,條件算式成立 
    {
      continue;  // 跳脫第 5 輪迴圈, 繼續第 6 輪 
    }
    printf(" %d ",i);
  }

  return 0;
}

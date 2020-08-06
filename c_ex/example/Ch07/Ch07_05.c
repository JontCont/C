#include <stdio.h>

int main(void)
{
  int i,sum=0; // i 是迴圈變數, sum 是用來計算總和 
        // 由 1 至 100 每次加 2, 為 1,3,5...的迴圈 
  for (i=1;i<100;i+=2)
  {
    sum=sum+i; // 累加計算總合 
  }
  
  printf("1~100的奇數和等於 %d\n",sum);

  return 0;
}

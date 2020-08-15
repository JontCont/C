#include <stdio.h>

int main(void)
{
  float sum,i;  // sum 是總和, i 是迴圈變數 
                // 兩個初始算式的迴圈 
  for (sum=0, i=0.1; i<1.1; sum+=i,i+=0.1)
  {
    printf(" %.1f +",i);
  }
  printf("\b = %.1f\n",sum);

  return 0;
}

#include <stdio.h>

int main(void)
{
  int *ptri,i;
  char *ptrc,c;

  ptri=&i;
  ptrc=&c;

  for(i=3;i>=1;i--)  // 指位器減去 3~1 的數值 
  {
    printf("指位器 ptri-%d = %p, ", i, ptri-i);
    printf("指位器 ptrc-%d = %p\n", i, ptrc-i);
  }
    
  printf("指位器 ptri   = %p, 指位器 ptrc   = %p\n",ptri, ptrc);

  for(i=1;i<=3;i++)  // 指位器加上 1~3 的數值 
  {
    printf("指位器 ptri+%d = %p, ", i, ptri+i);
    printf("指位器 ptrc+%d = %p\n", i, ptrc+i);
  }
 
  return 0;
}

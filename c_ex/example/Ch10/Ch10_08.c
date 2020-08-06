#include <stdio.h>
#define ROW 5
#define COL 4

int main(void)
{
  int a[ROW][COL]={54,65,87,95,  // 註明位置的宣告方式 
                   41,18,24,98,
                   45,33,35,70,
                   23,11,79,64,
                   97,67,40,37};
  int i,j;

  for (i=0;i<ROW;i++)   // 外迴圈控制二維陣列的第 1 個維度
  {
    for (j=0;j<COL;j++) // 內迴圈控制二維陣列的第 2 個維度
    { 
      printf("a[%d][%d]=%d  ",i,j,a[i][j]);
    }
    printf("\n");
  }

  return 0;
}

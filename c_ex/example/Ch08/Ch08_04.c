#include <stdio.h>
float add(int,int); // 原型宣告, 計算 2 數總和的函式 

int main(void)
{
  int i=396, j=548;   // 測試用的數值 
  
  // 以 sum 接受 add() 函式的傳回值 
  float sum = add(i,j); 
  printf("%d + %d = %.0f\n",i,j, sum);

  return 0;
}

float add(int x,int y)  // 定義算出總和的函式 
{
  float total = (float)x + y;
  return total;        // 把總和傳回 main() 
}

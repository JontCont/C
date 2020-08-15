#include <stdio.h>

int main(void)
{
  int iNum1 = 7;  // 宣告整數變數並給予初始值 7 
  int iNum2 = 3;  // 宣告整數變數並給予初始值 3 
  float answer;     // 宣告整數變數用來接受運算結果值 

  answer = iNum1 / iNum2;  // 算出兩個整數相除的商 
  printf("未轉型別前的商值 = %f\n",answer);
  
  // 算出浮點數(轉型後的整數)與整數相除的商 
  answer = (float) iNum1 / iNum2;
  printf("轉型別後的商值   = %f\n",answer);

  return 0;
}

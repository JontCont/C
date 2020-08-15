#include <stdio.h>

int main(void)
{
  // 纗 4 计跑计 
  int num1, num2, num3, num4;

  // 纗ゑ耕筁祘い, 耕计跑计 
  int bigger1, bigger2, biggest;

  printf("叫块 4 计\n");
  scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

  // ゑ耕计1 ㎝计2 , 纗挡狦 
  if (num1>num2) bigger1 = num1;
  else           bigger1 = num2;   
  
  // ゑ耕计3 ㎝计4 , 纗挡狦 
  if (num3>num4) bigger2 = num3;
  else           bigger2 = num4;  

  // 盢玡 2 Ωゑ耕挡狦ㄓゑ耕 
  // 计1,2,3,4 程 
  if (bigger1>bigger2) biggest = bigger1;
  else                 biggest = bigger2;

  printf("程计 %d ",biggest);
  return 0;
}

#include <stdio.h>

int main(void)
{
  float pi=3.14159; 
  float x =pi/3;     // pi 的 3 分之一 
  
  //  pi 減自己的 3 分之一減 3 次, 是否等於 0  
  printf("%d\n",(pi - x - x - x)==0);
  
  //  pi 減 3*(自己的 3 分之一), 是否等於 0 
  printf("%d",(pi - 3*x) ==0);
  
  return 0;
}

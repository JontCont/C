#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  bool x= false; // 布林型別 
  bool y= 99;    // 指定成數值 
  
  printf("bool 型別大小為 %d 位元組\n", sizeof(_Bool));
  printf("x=%d, y=%d\n", x, y);
  printf("x && y => %d\n", x && y); // AND 運算 
  printf("x || y => %d\n", x || y); // OR  運算 
  printf("  !x   => %d\n", !x);     // NOT 運算  
  printf("  !y   => %d\n", !y);
  
  return 0;
}

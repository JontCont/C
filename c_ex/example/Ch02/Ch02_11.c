#include <stdio.h>

int main(void)
{
  const char i=5;
  i=10;      // 指定新值給 const 變數 
  printf("%c",i);

  return 0;
}

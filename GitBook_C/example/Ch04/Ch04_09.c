#include <stdio.h>

int main(void)
{
  int a=2,b=2;

  printf("a+b>a-b && a+b<a-b 的邏輯推演結果為 %d\n",
          a+b>a-b && a+b<a-b);
  printf("a+b>a-b || a+b<a-b 的邏輯推演結果為 %d\n",
          a+b>a-b || a+b<a-b);

  return 0;
}

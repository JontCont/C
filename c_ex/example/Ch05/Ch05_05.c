#include <stdio.h>

int main(void)
{
  int test;

  printf("叫块俱计: ");
  scanf("%d", &test);
  
  printf("%d  2 单 %d\n", test, test << 1);
  printf("%d  4 单 %d\n", test, test << 2);
  printf("%d  8 单 %d\n\n", test, test << 3);
  
  printf("%d 埃 2 单 %d\n", test, test >> 1);
  printf("%d 埃 4 单 %d\n", test, test >> 2);
  printf("%d 埃 8 单 %d\n", test, test >> 3);

  return 0;
}

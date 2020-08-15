#include <stdio.h>

int main(void)
{
  int a=33, b=66;

  a += b;  // 也就是 a = a + b 
  printf("a = %d\n",a);
  
  a *= b;  // 也就是 a = a * b 
  printf("a = %d\n",a);

  return 0;
}

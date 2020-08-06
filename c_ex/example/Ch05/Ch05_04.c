#include <stdio.h>

int main(void)
{
  printf(" 3 <<  2 = %d\n", 3<<2);
  printf("99 <<  3 = %d\n", 99<<3);
  printf(" 2 << 30 = %d\n\n", 2<<30);
  
  printf(" 2468 >> 2  = %d\n", 2468>>2);
  printf("65535 >> 3  = %d\n", 65535>>3);
  printf("   -2 >> 30 = %d\n", -2>>30);
  
  return 0;
}

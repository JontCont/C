#include <stdio.h>
struct 
{
  int      nibble1 :4; // 佔 4 位元的有號整數
  unsigned nibble2 :4; // 佔 4 位元的無號整數
} aByte={7,0};

int main(void)
{
  printf("aByte 結構體位元欄位的內容:\n");
  printf("nibble1:%d\tnibble2:%d\n\n",aByte.nibble1, aByte.nibble2);
  
  aByte.nibble1++;  // 修改位元欄位值 
  aByte.nibble2--;

  printf("aByte 結構體位元欄位的內容:\n");
  printf("nibble1:%d\tnibble2:%d\n",aByte.nibble1, aByte.nibble2);

  return 0;
}

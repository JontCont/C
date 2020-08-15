#include <stdio.h>
#define BIT(X) 1<<X        // 定義位元巨集 

int main(void)
{
  unsigned char reg8=0;    //  假設 reg8 代表某 8 位元暫存器 
  unsigned short reg16=0;  //  假設 reg16 代表某 16 位元暫存器

  printf("將 reg8 的 bit3 設為 1:\n");
  reg8 |= BIT(3);
  printf("reg8: %02X\n\n", reg8);

  printf("將 reg16 的 bit10 設為 1:\n");
  reg16 |= BIT(10);
  printf("reg16: %04X\n", reg16);

  return 0;
}

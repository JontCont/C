#include <stdio.h>

int main(void)
{
  // 模擬 8 位元暫存器, 預設值 0xFF
  unsigned char PORTA = 0xFF;  
  printf("PORTA 初始值為 %02X\n\n", PORTA);
  
  PORTA &= 0xF3;    // 將 bit 2,3 清除為 0  
  printf("將 bit 2,3 清除為 0 後\n"); 
  printf("PORTA 的值為 %02X\n\n", PORTA);
  
  PORTA &= 0x3F;    // 再將 bit 6,7 清除為 0  
  printf("繼續將 bit 6,7 清除為 0 後\n"); 
  printf("PORTA 的值為 %02X\n", PORTA);
  
  return 0;
}

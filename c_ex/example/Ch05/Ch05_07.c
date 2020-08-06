#include <stdio.h>

int main(void)
{
  // 模擬 8 位元暫存器, 預設值 0x00 
  unsigned char PORTA = 0x00;  
  printf("PORTA 初始值為 %02X\n\n", PORTA);
  
  PORTA |= 0x0C;    // 將 bit2,3 設為 1  
  printf("將 bit 2,3 設為 1 後\n"); 
  printf("PORTA 的值為 %02X\n\n", PORTA);
  
  PORTA |= 0xC0;    // 再將 bit6,7 設為 1  
  printf("繼續將 bit 6,7 設為 1 後\n"); 
  printf("PORTA 的值為 %02X\n", PORTA);
  
  return 0;
}

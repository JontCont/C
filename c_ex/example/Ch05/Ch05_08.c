#include <stdio.h>

int main(void)
{
  // 家览 8 じ既竟, 箇砞 0xF0 
  unsigned char PORTA = 0xF0;  
  printf("PORTA ﹍ %02X\n\n", PORTA);
  
  PORTA ^= 0x07;    // ち传 bit 2,1,0 
  printf("ち传 bit 2,1,0 \n"); 
  printf("PORTA  %02X\n\n", PORTA);
  
  PORTA ^= 0xE0;    // ち传 bit 7,6,5
  printf("ち传 bit 7,6,5 \n"); 
  printf("PORTA  %02X\n", PORTA);
  
  return 0;
}

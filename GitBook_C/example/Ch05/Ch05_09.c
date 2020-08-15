#include <stdio.h>
#define SWITCH1 0x01       // 若按鈕 1 連接的腳位對應到 bit 0
#define SWITCH2 0x02       // 若按鈕 2 連接的腳位對應到 bit 1

int main(void)
{
  // 假設暫存器讀到的值為 0xF6
  unsigned char PORTA = 0xF6;  
  printf("PORTA 輸入值為 %02X\n\n", PORTA);
  
  printf("按鈕 1 被按下? %d\n", (PORTA & SWITCH1) == SWITCH1);
  printf("按鈕 2 被按下? %d\n", (PORTA & SWITCH2) == SWITCH2);
  printf("按鈕 1, 2 同時被按下? %d\n", 
                 (PORTA & (SWITCH2|SWITCH1) == (SWITCH2|SWITCH1)));
  
  return 0;
}

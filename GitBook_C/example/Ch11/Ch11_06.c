#include <stdio.h>

int main(void)
{
  int i;   // int (4 Bytes) 變數  
  short s; // short (2 Bytes) 變數 
  char *ptr; // char (1 Byte) 指位器 

  ptr=(char*) &i;   // 讓 char 指位器指向 i 的位址 
  *ptr    = 0x56;  // 個別設定 int 中每個位元組的值 
  *(ptr+1)= 0x34;
  *(ptr+2)= 0x12;
  *(ptr+3)= 0;
  printf("i= %08X\n", i);
  
  ptr=(char*) &s; // 讓 char 指位器指向 s 的位址 
  *ptr   = 0x00;  // 個別設定 short int 中每個位元組的值 
  *(ptr+1)= 0x77;
  printf("s= %04X", s);
  
  return 0;
}

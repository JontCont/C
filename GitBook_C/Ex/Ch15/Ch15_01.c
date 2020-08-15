#include <stdio.h>

union data  // 宣告共同空間 data 
{
  int  a;
  char b;
} mydata;   // 共同空間變數 mydata 

int main(void)
{
  mydata.a=0x1200;   // 指定十六進位值 
  printf("mydata.a = %04x\n",mydata.a);
  mydata.b='3';      // 指定字元 
  printf("mydata.b = %c\n",mydata.b);
  printf("mydata.a = %04x\n",mydata.a);

  return 0;
}

#include <stdio.h>

int main(void)
{
  int total = 100;    // 球的總數 100 個 
  int count = 7;      // 每次拿掉 7 個球 

  int remainder = total % count;  // 得到兩數相除後的餘數 
  printf("剩下 %d 個球\n", remainder);

  return 0;
}

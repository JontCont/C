#include <stdio.h>

int main(void)
{
  int i=10, j; // i 的值等於 10 

  j = i + 10;  // j 的值等於 10 + 10 
  i = i + j;   // i 的舊值 10 加上 j 的值 20 
               // 變成了新的 i 值 30 
  j = j + 1;
  printf("i 的值為 %d\n",i);
  printf("j 的值為 %d\n",j);

  return 0;
}

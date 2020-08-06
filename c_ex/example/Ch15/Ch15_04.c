#include <stdio.h>

int main(void)
{
  typedef char * STRING1;  // 定義新型別
  typedef char STRING2[60];
  
  STRING1 theory1="彩虹, 是一種光線折射的現象...";
  STRING2 theory2="溫度計, 是利用熱漲冷縮的原理...";
  printf("%s\n",theory1);
  printf("%s\n",theory2);

  return 0;
}

#include <stdio.h>

int main(void)
{
  printf("這一行輸出後會有一個字\b被刪掉\n");
  printf("這些字看不到 \r 因為被刪掉了 \n");
  printf("這幾個字後面的字也看不到啦 \0 因為被忽略了\n");

  return 0;
}

#include <stdio.h>
#include <string.h>

int main(void)
{
  char str1[32] = "BIRTH";
  char str2[] = "DAY";

  printf("第 1 個字串: %s\n", str1);
  printf("第 2 個字串: %s\n", str2);
  printf("將第 2 個字串串接在第 1 個字串後面的結果\n%s\n",
         strcat(str1,str2));  // 串接 str1 與 str2 

  return 0;
}

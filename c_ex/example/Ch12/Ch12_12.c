#include <stdio.h>
#include <string.h>

int main(void)
{
  char str1[32] = "foot";
  char str2[] = "ballet";
  int n;

  printf("第 1 個字串: %s\n",str1);
  printf("第 2 個字串: %s\n",str2);

  printf("請問要將第 2 個字串的前幾個字元串接到第 1 個字串後: ");
  scanf("%d",&n);
  strncat(str1,str2,n); // 串接指定的字元數 
  printf("串接結果： %s\n",str1);

  return 0;
}

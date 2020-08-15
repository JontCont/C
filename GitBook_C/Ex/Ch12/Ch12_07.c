#include <stdio.h>
#include <string.h>   // 記得要含括此檔 

int main(void)
{
  char str1[]="Money is power"; // 定義字串 
  char *str2=str1;

  printf("字串str1長度      %d bytes\n", strlen(str1));
  printf("字串str1佔記憶體  %d bytes\n", sizeof(str1));
  printf("字串str2長度      %d bytes\n", strlen(str2));
  printf("字串str2佔記憶體  %d bytes\n", sizeof(str2));

  return 0;
}

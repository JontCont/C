#include <stdio.h>

int main(void)
{
  char str[]="Embedded System";  // 設定字串初始值 

  printf("str 陣列大小 = %d\n",sizeof(str));
  printf("str 字串的內容為 %s\n",str);

  return 0;
}

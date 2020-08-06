#include <stdio.h>

int main(void)
{
  char *ptr="Embedded System";  // 設定字串初始值 
  int i=0;  // 迴圈變數 
  
  printf("ptr 字串的內容為 %s\n",ptr);
  
  for(i=0;i<16;i++)  // 用指位器輸出字串中各字元的位址與值
    printf("*(ptr+%02d) (%p) : %c (%#3d) \n",
                 i,  (ptr+i), *(ptr+i), *(ptr+i));

  return 0;
}

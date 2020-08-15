#include <stdio.h>
#define length 35          // 定義長度的值 
#define width 20           // 定義寬度的值 
#define area length*width  // 定義面積公式 
#if length>width           // 判斷長度是否大於寬度 
#define condition 'T'      // 定義狀況為真 
#else
#define condition 'F'      // 定義狀況為假 
#endif

int main(void)
{
  if (condition=='T')      // 判斷狀況是否為真 
  {
    printf("長 = %d\n",length);
    printf("寬 = %d\n",width);
    printf("矩形面積: %d*%d=%d\n",length,width,area);
  }
  else
    printf("長寬定義錯誤, 請重新定義\n");

  return 0;
}

#include <stdio.h>

int main(void)
{
  int number[5]={2,4,12,6,18}; // 宣告陣列並設定初始值 
  int i;                       // 迴圈變數 

  printf("陣列的大小為 %d bytes\n",sizeof(number));

  for(i=0;i<5;i++)
    printf("number[%d] 的值為: %d\n",i,number[i]);

  return 0;
}

#include <stdio.h>

int main(void)
{
  int i=1, j=1;
  printf("處理中...\n");
  
  for(i=1; i<=32767; i++) 
  {
    for(j=1; j<=32767; j++)
    {   }   // 沒有做事的迴圈  
  }  

  printf("處理完成\n");
  
  return 0;
}

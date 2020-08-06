#include <stdio.h>

enum ANIMAL {tiger,horse,bird,dog};  // 宣告列舉型別 

int main(void)
{
  enum ANIMAL mypet=dog;
  
  if(mypet==dog) printf("我養了一隻小狗");
  else           printf("我沒有養小狗");
  
  return 0;
}

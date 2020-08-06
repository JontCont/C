#include <stdio.h>

int main(void)
{
  int litre;            // 宣告一個整數型別的變數 
  float price = 25.5, total;
  void  *vIptr, *vFptr; // 宣告 void 型別的指位器 

  vFptr= &price;        // 將變數位址指定給 void 型別指位器
  vIptr= &litre;

  // 以強制轉型取得指位器所指的變數 
  printf("汽油每公升 %.1f 元\n",*(float*)vFptr);
  printf("加幾公升? ");
  scanf("%d", (int*) vIptr);
  total=(*(int*)vIptr) * (*(float*)vFptr);
  printf("小計 %.1f 元\n",total);
  
  return 0;
}

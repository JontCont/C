#include <stdio.h>

int main(void)
{
  int a=20; // 初始值 20 

  // 計算 ++a*10
  printf("++a *10 = %d\n", ++a*10);
  printf("a= %d\n\n",a);
  
  a=20; // 重新設定 a 的值為 20 

  // 計算 a++*10
  printf("a++ *10 = %d\n", a++*10);
  printf("a= %d\n",a);

  return 0;
}

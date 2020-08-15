#include <stdio.h>

int main(void)
{
  int fatherAge=38, childAge=10;
    
  printf("結果為 1 表示真; 結果為 0 表示假\n");
  printf("父親年齡大於小孩年齡 %d\n",   fatherAge>childAge);
  printf("父親年齡小於小孩年齡 %d\n",   fatherAge<childAge);
  printf("父親年齡等於小孩年齡 %d\n",   fatherAge==childAge);
  printf("父親年齡不等於小孩年齡 %d\n", fatherAge!=childAge);
  printf("父親年齡大於或等於小孩年齡 %d\n", fatherAge>=childAge);
  printf("父親年齡小於或等於小孩年齡 %d\n", fatherAge<=childAge);
  
  return 0;
}

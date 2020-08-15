#include <stdio.h>

int main(void)
{
  int i,j;

  printf("請輸入兩個整數:");
  scanf("%d %d",&i,&j);  // 取得 2 個連著輸入的整數 
  printf("您輸入的 2 個整數是 %d 與 %d\n",i,j);
  printf("2 個整數的和為 %d\n",i+j);

  return 0;
}

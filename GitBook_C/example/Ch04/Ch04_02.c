#include <stdio.h>

int main(void)
{
  int egg=35, toast=46, ham=64, milk=65; // 宣告各項商品的單價 
  int total;

  total = egg*2 + toast*3 + ham/2 + milk*4; // 總數等於各項商品金額的和 
  printf("總共 %d 元\n",total);

  return 0;
}

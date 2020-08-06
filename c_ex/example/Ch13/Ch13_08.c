#include <stdio.h>
#include "Ch13_08.h" // 含括 Ch13_08.h 檔 

int main(void)
{
  int option,price;  // option 是選項, price 是價格 

  printf("請選擇房間等級:\n");
  printf("(1)總統套房 (2)豪華套房 (3)高級套房 (4)標準套房: ");
  scanf("%d",&option);

  printf("您選擇的是:\n");
  switch (option)
  {
    case 1:
          printf("總統套房\n");
          price = PRESIDENT;   // 使用含括檔定義的常數 
          break;
    case 2:
          printf("豪華套房\n");
          price=LUX_CLASS;     // 使用含括檔定義的常數 
          break;
    case 3:
          printf("高級套房\n");
          price=DLX_CLASS;     // 使用含括檔定義的常數    
          break;
    case 4:
          printf("標準套房\n");
          price=STD_CLASS;     // 使用含括檔定義的常數
          break;
    default:
          printf("公園板凳\n");
          price=0;
  }
  printf("每晚定價: %d 元\n",price);

  return 0;
}

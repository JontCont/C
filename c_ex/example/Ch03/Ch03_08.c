#include <stdio.h>

int main(void)
{
  int n=74;
  // 設定輸出時的欄位佔 5 個字元, 數字前加正負號, 空白處補 0 
  printf("寬為 5, 數字前加正號, 補 0   : %+05d \n",n);
 
  // 設定輸出時的欄位佔 5 個字元, 數字前加正負號  
  printf("寬為 5, 數字前加正號, 不補 0 : %+05d \n",n);

  return 0;
}

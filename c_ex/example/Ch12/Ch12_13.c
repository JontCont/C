#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  char date[11];  // 儲存由鍵盤輸入的年/月/日 
  char mm[3]={0}; // 存放月的字串 
  char dd[3]={0}; // 存放日的字串

  printf("請輸入日期 (例如 2020/05/05): ");
  scanf("%10s",date);     // 指定讀入十個字元 
  
  strncpy(mm, (const char*)date+5, 2); // 將月份存入 mm 陣列中 
  strncpy(dd, (const char*)date+8, 2); // 將日期存入 dd 陣列中 
  
  printf("日期:民國 %d 年 %d 月 %d 日\n",
         atoi(date)-1911,   // 西元轉民國
         atoi(mm),          // 月 
         atoi(dd));         // 日 

  return 0;
}

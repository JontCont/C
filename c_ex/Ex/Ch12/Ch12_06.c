#include <stdio.h>

int main(void)
{
   char string[60];    // 宣告一字元陣列用來儲存字串 

   printf("請輸入一段字串: ");
   gets(string);       // 先用 gets() 取得輸入
   printf("您輸入的字串為: %s\n\n",string); // 輸出字串 
   
   printf("請輸入另一個字串: ");
   scanf("%s",string); // 改用 scanf() 取得輸入
   printf("您輸入的字串為: %s\n",string); // 輸出字串 

   return 0;
}

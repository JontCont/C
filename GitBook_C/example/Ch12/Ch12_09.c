#include <stdio.h>
#include <string.h>

int main(void)
{
   char str1[60];   // 定義字串 
   char str2[60];

   printf("請輸入第 1 個字串: ");
   gets(str1);
   printf("請輸入第 2 個字串: ");
   gets(str2);

   if(strcmp(str1,str2)== 0) // 比對 str1、str2 
     printf("兩字串的內容相等\n");
   else
     printf("兩字串內容不相同\n");

   return 0;
}

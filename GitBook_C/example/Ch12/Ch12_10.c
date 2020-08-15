#include <stdio.h>
#include <string.h>

int main(void)
{
  char str1[60];  // 宣告儲存字串1 的陣列 
  char str2[60];  // 宣告儲存字串2 的陣列 
  int i,length;   // i 為迴圈變數, length 為字串長度 

  printf("請輸入第 1 個字串: ");
  gets(str1);
  printf("請輸入第 2 個字串: ");
  gets(str2);

  if(strcmp(str1,str2)==0)         // 先比對 str1 與 str2 是否不同 
    printf("兩字串相同!\n",i);
  else
  {   
    if(strlen(str1)>strlen(str2)) // 將 length 設定為 
      length=strlen(str1);        // 較長字串的長度 
    else
      length=strlen(str2);
	                          
    for(i=1;i<=length;i++)        // 逐字元比對 str1 與 str2  
      if(strncmp(str1,str2,i)!= 0)  // 比對到不同即跳出迴圈 
        break;
    printf("兩字串從第 %d 個字開始不同!\n",i);
  }
  
  return 0;
}

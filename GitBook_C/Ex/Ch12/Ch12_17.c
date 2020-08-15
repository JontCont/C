#include <stdio.h>
#include <string.h>
#define LEN 30        // 最多可輸入的行數 
#define WIDTH 60      // 每行中最多可輸入的字元 

int main(void)
{
  char strs[LEN][WIDTH];  // 儲存所有輸入字串的陣列 
  int i;       // 迴圈變數
  int last=0;  // 輸入字串最後一項的索引值 

  printf("請依序輸入字串, ");
  printf("單字輸入完畢請按下 Enter, 全部輸入完畢請輸入 quit\n");
  do
  {
    gets(strs[last]);      // 從鍵盤輸入字串 
    if (strcmp(strs[last],"quit")==0) // 判斷字串是否為 quit
      break;                          // 是就跳出迴圈 
    last++;
  } while(last<LEN);       // 判斷是否停止輸入的迴圈算式 
  
  printf("\n字串組合結果:");
  for(i=0;i<last;i++)     // 輸出字串陣列的內容 
  {
    if(i%2==0)            // 輸出兩筆才換行 
      printf("\n");       // 相當於讓兩個字串連在一起  
    printf("%s",strs[i]);
  }
  
  return 0;
}

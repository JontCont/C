#include <stdio.h>
#include <conio.h>

int main(void)
{
  int i=0;      // 迴圈執行次數 
  char input;  // 選擇字元 
  
  do
  {
    i++;
    printf("\n迴圈已經執行 %d 次\n",i);
    printf("繼續嗎?(y/n)");
    input=getche();
  } while(input=='y'); // 迴圈的條件算式 
  
  printf("\n迴圈總共執行了 %d 次\n", i);

  return 0;
}

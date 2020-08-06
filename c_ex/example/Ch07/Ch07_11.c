#include <stdio.h>

int main(void)
{
  int i,j,k;                // 3 個迴圈的變數 

  for (i=0;i<100;i++)       // 最外第一層迴圈, 由 0 至 99 跑一百次 
  {
    for (j=0;j<100;j++)     // 中間第二層迴圈, 由 0 至 99 跑一百次 
    {
      for (k=0;k<100;k++)   // 最內第三層迴圈, 由 0 至 99 跑一百次 
      {
        printf("i= %d,j= %d,k= %d\n",i,j,k);
        goto endloop;       // 程式流程改執行標籤名 endloop 處 
      }
    }
  }
    
  endloop:  // goto 敘述會讓程式流程直接跳到此處繼續執行 
    printf("迴圈被強制跳脫了\n");

  return 0;
}

#include <stdio.h>
#define SIZE 5  // 定義常數 SIZE 為 5

int main(void)
{
  int age[SIZE]; // 宣告儲存年齡資料的陣列 
  int i,sum=0;   // i 為迴圈變數, sum 為總和 
  float avg;     // avg 為年齡的平均 

  printf("開始輸入員工的年齡:\n");
  for(i=0;i<SIZE;i++)    // 控制輸入的迴圈 
  {
    printf("輸入第 %d 筆年齡資料: ", i+1);
    scanf("%d",&age[i]); // 由鍵盤輸入年齡資料 
    sum+=age[i];         // 計算年齡總和, 稍後用來計算平均年齡
  }
  
  avg=(float)sum/SIZE;   // 計算平均年齡
  printf("員工的平均年齡為 %.2f\n",avg);

  return 0;
}

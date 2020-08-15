#include <stdio.h>
#define SIZE 5  // 本例只處理 5 筆數值 

int main(void)
{
  int number[SIZE];  // 儲存數值的陣列 
  int max=0, i;      // max 是最大值, i 是迴圈變數 

  printf("請輸入 5 個整數, 我會找出最大值\n");
  for (i=0;i<SIZE;i++) // 用迴圈來控制陣列 
  {
    printf("請輸入第 %d 個數字: ", i+1);
    scanf("%d",&number[i]);  // 將輸入值依序存到陣列  
  }
  
  for (i=0;i<SIZE;i++)  // 比對陣列值的迴圈 
     // 如果陣列值大於 max 則以陣列值取代 max 變數值 
    if(number[i]>max) max=number[i];

  // 先列出全部數字再輸出最大值 
  printf("\n");
  for (i=0; i<SIZE; i++)
    printf("%d, ",number[i]);

  printf("中的最大值為 %d\n",max);

  return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int *num;
  // sum 是總和, i 是迴圈變數, n 為數值個數 
  int sum=0, i, n;

  printf("請問要計算多少個數字的總和: ");
  scanf("%d",&n);

  num=(int*)malloc(sizeof(int)*n); // 配置記憶體 
  
  for(i=0;i<n;i++)                 // 以迴圈儲存數值 
  {
    printf("請輸入第 %d 個數值: ",i+1);
    scanf("%d",(num+i));
  }
  
  for(i=0;i<n;i++)                 // 以迴圈計算總和 
  {
    sum += *(num+i);               // 計算總和 
  }
  printf("總和等於 %d\n",sum);
  free(num);  // 釋放配置的記憶體 

  return 0;
}

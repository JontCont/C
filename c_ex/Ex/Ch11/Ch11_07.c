#include <stdio.h>
#define SIZE 5  // 陣列大小 

int main(void)
{
  int number[SIZE], max=0, i;
  int *ptr= &number[0];  // 指位器指向第 0 個元素 
  
  
  printf("請輸入 5 個整數值: ");
  for(i=0;i<SIZE;i++)
  {
    scanf("%d", ptr+i);  // 用指位器加法, 將輸入值存到各元素
    if(*(ptr+i)>max)     // 用指位器加法, 取得各元素值 
      max=*(ptr+i);      // 找出最大值 
  }
  
  for(i=0;i<SIZE;i++)
  {
    printf("%d ",*(ptr+i)); // 用指位器加法, 取得各元素值
  }
  printf("最大值為 %d\n",max);

  return 0;
}

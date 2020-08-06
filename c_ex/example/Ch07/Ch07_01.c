#include <stdio.h>
int main(void)
{
  int start, end, sum=0;

  printf("計算累加總和, 請輸入起始值與結束值(需皆為整數)\n");
  scanf("%d %d", &start, &end);
  printf("從 %d 累加到 %d 的總和為 ", start, end);
  
  while(start<=end)  // 迴圈的條件算式 
  {
    sum=sum+start;   // 每次都將 start 的值加到 sum 
    start++;         // 將 start 的值加 1 
  }
  printf("%d\n", sum);

  return 0;
}

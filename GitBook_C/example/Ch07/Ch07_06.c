#include <stdio.h>

int main(void)
{
  // i、j 為迴圈變數, n 是多項式項數, sum 是總和 
  int i,j,n,sum=0;

  printf("計算多項式 (1+2)+(2+4)+(3+6)...+(n+2*n) 的值\n");
  printf("請輸入 n 值\n");
  scanf("%d",&n);

  // 兩組算式的迴圈 
  for(i=1,j=2;i<=n,j<=2*n;i++,j=j+2)
  {
    sum=sum+(i+j);    // 計算總和 
        // 將多項式每一項從螢幕輸出 
    printf("(%d+%d)+",i,j);
  }
  printf("\b = %d\n",sum);

  return 0;
}

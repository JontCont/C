#include <stdio.h>
#define ROW 9
#define COL 9

int main(void)
{                       // 栋蝴皚よΑ 
  int a[ROW][COL];
  int i,j;

  for (i=0;i<ROW;i++)   // 癹伴北蝴皚计   
    for (j=0;j<COL;j++) // ず癹伴北蝴皚︽计 
      a[i][j]=(i+1)*(j+1);  // 砞﹚じ 
  
  for (i=0;i<ROW;i++)   // 北蝴皚计 
  {
    for(j=0;j<COL;j++)  // 北蝴皚︽计 
    { 
      printf("%2d ",a[i][j]); // 块じ
    }
    printf("\n");       // 块碞传︽ 
  }

  return 0;
}

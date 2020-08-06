#include <stdio.h>
#include <stdlib.h>
#define ROW 3
#define COL 4

int main(void)
{
  int A[ROW][COL]={18,44,21,25,
                   21,19,65,41,
                   78,21,33,54};
  int B[ROW][COL]={65,32,45,74,
                   11,24,10,41,
                   12,45,18,11};
  int C[ROW][COL];
  int i,j;      // 控制迴圈的變數 

  for(i=0;i<ROW;i++)
  {
    for(j=0;j<COL;j++) // 輸出陣列 A  的內容 
      printf("%3d",A[i][j]);
    
    if(i==1)   // 在 A, B 兩陣列間輸出空白或加號
      printf("  +  ");
    else
      printf("     ");
    
    for(j=0;j<COL;j++) // 輸出陣列 B  的內容 
      printf("%3d",B[i][j]);
    
    if(i==1)   // 在 B, C 兩陣列間輸出空白或等號
      printf("  =  ");
    else
      printf("     ");
    
    for(j=0;j<COL;j++) // 進行加法計算的迴圈  
    {
      C[i][j]=A[i][j]+B[i][j];
      printf("%3d",C[i][j]);
    }
    
    printf("\n");
  }

  return 0;
}

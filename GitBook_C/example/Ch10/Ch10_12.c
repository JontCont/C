#include <stdio.h>
#define SIZE 9
void output(int[][SIZE]); // 輸出陣列內容的函式 

int main(void)
{                         // 集合一維陣列的宣告方式 
  int array[SIZE][SIZE];
  int i,j;
 
 // 用迴圈設定陣列內容 
  for (i=0;i<SIZE;i++)    // 外迴圈控制二維陣列的列數 
  {
    for (j=0;j<SIZE;j++)  // 內迴圈控制二維陣列的行數 
      array[i][j]=(i+1)*(j+1);
  }

  output(array);          // 呼叫函式輸出陣列內容 

 return 0;
}

void output(int ary[][SIZE])  // 定義輸出陣列內容的函式
{ 
  int i,j;

  for (i=0;i<SIZE;i++)
  {
    for(j=0;j<SIZE;j++)
      printf("%2d ",ary[i][j]);
    
    printf("\n");
  }
}

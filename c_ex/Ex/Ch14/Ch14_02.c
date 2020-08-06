#include <stdio.h>

struct grade    // 宣告結構體 grade 
{
  int sid;      // 學生學號 
  int chinese;  // 國文成績 
  int math;     // 數學成績 
  int english;  // 英文成績 
} ss1={109001,78,98,54},
  ss2={109002,65,78,44};  // 設定結構體變數的初始值 
               
int main(void)
{
  printf("  學號  國文  數學  英文\n");
  
  // 輸出第 1 個結構體變數的數值內容 
  printf("%6d   %#3d   %#3d   %#3d\n",
       ss1.sid,ss1.chinese,ss1.math,ss1.english);
  // 輸出第 2 個結構體變數的數值內容 
  printf("%6d   %#3d   %#3d   %#3d\n",
       ss2.sid,ss2.chinese,ss2.math,ss2.english);
       
  return 0;
}

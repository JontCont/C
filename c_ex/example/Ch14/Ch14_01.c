#include <stdio.h>

struct grade    // 宣告結構體 grade 
{
  int sid;      // 學生學號 
  int chinese;  // 國文成績 
  int math;     // 數學成績 
  int english;  // 英文成績 
};

int main(void)
{
  struct grade ss;        // 宣告結構體變數 ss 
  printf("請輸入學號: ");
  scanf("%d",&ss.sid);    // 輸入結構體變數的數值 
  printf("請輸入國文成績: ");
  scanf("%d",&ss.chinese);
  printf("請輸入數學成績: ");
  scanf("%d",&ss.math);
  printf("請輸入英文成績: ");
  scanf("%d",&ss.english);

  printf("  學號  國文  數學  英文\n");
  printf("%6d   %#3d   %#3d   %#3d\n",
       ss.sid,ss.chinese,ss.math,ss.english);

  return 0;
}

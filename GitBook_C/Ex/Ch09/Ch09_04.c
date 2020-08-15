#include <stdio.h>
double area1(double);       // 計算圓面積函式之一 
double area2(double);       // 計算圓面積函式之二
double pi = 3.1415926;

int main(void)
{
  double r=0;
  printf("輸入圓的半徑, 輸入完畢請按 Enter: \n");
  scanf("%lf", &r);

  printf("圓面積為: %f 或 %f", area1(r), area2(r));

  return 0;
}

double area1(double r)       // 計算圓面積函式之一 
{
  return pi*r*r;
}

double area2(double r)      // 計算圓面積函式之二
{
  double pi = 3.14;         // 與外部變數同名的內部變數 
  return pi*r*r;
}

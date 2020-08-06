#include <stdio.h>
double area(float r)      //計算圓型面積 
{                         // 在 main()之前定義的函式 
  return r*r*3.14159;     // 兼具宣告的功用 
}

int main(void)
{
  float r;   // 半徑 

  printf("請輸入半徑: ");
  scanf("%f",&r);
                          // 將 r 傳入函式 area() 
  printf("圓型面積 = %f \n", area(r));
  return 0;
}

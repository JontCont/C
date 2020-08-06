#include <stdio.h>

int main()
{
  float c;
  float ctof(float);  // 盢尼ん放锣地Α放ㄧΑ 

  printf("叫块尼ん放: ");
  scanf("%f",&c);
  printf("尼ん放 %.1f 单地ん %.1f \n",c, ctof(c));

  return 0;
}

float ctof(float c)   // 锣传放ㄧΑ 
{ 
  return c * 9 / 5 + 32;
}

#include <stdio.h>

int main(void)
{
  float degreeC, degreeF;

  printf("叫块地ん放: ");
  scanf("%f", &degreeF);
  degreeC = (degreeF - 32) * 5 / 9;  // 放锣传そΑ衡Α 
  printf("尼ん放 %.2f\n", degreeC);

  return 0;
}

#include <stdio.h>

union  // 俱计籔疊翴计丁
{
  float distance;   // 纗ń祘计 
  int   passenger;  // 纗更计 
} trip[2];          //  2 丁皚

int main(void)
{
  trip[0].passenger=5;
  printf("材 1 诫更, 计 %d \n", trip[0].passenger);
  
  trip[1].distance=15.5;
  printf("材 2 诫更, ń祘 %.2f そń\n", trip[1].distance);

  return 0;
}

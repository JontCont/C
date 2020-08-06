#include <stdio.h>

int main(void)
{
  int n=74;
  float m=7.4;

  // 砞﹚块逆 5 じ, 场ぃ干 0 
  printf("糴=5, ぃ干 0: %5d \n",n);
  
  // 砞﹚块逆 10 じ, 场干 0 
  printf("糴=10, 干 0 : %010d \n",n);
  
  // 砞﹚块俱计场 4 じ, 计场 2 じ 
  // 场ぃ干 0 
  printf("俱计场糴=4, 计场糴=2          : %7.2f\n",m);
  
  // 砞﹚块俱计场 4 じ, 计场 2 じ 
  // フ逆矪干 0 Α 
  printf("俱计场糴=4, 计场糴=2, 干 0: %07.2f\n",m);

  return 0;
}

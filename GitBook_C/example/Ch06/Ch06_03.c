#include <stdio.h>

int main(void)
{
  int score;

  printf("Θ罿だ单, 叫块Θ罿\n");
  scanf("%d",&score);

  if (score>=90)         // score 单 90 琌痷 
    printf("ヒ单!!\n");  // 痷, 块挡狦 

  // 安, 耞 score 单 80 琌痷 
  else if (score>=80)
    printf("单!!\n");  // 痷, 块挡狦 

  // 安, 耞 score 单 70 琌痷 
  else if (score>=70)
    printf("单!!\n");  // 痷, 块挡狦 

  // 安, 耞 score 单 60 琌痷 
  else if (score>=60)
    printf("单!!\n");  // 痷, 块挡狦 

  else
    printf("コ单!!\n");  // 安, 块挡狦 

  return 0;
}

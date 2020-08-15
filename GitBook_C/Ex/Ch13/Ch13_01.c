#include <stdio.h>
#define EARTH_MASS   5.97219e24 // 地球質量 
#define EARTH_RADIUS 6371000.0  // 地球半徑 
#define G 6.672e-11             // 定義萬有引力常數 

int main(void)
{
  printf("地表重力加速度 = %f\n",
          G * EARTH_MASS / (EARTH_RADIUS*EARTH_RADIUS) );
  
  return 0;
}

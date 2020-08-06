#include <stdio.h>
#define ENERGY mass * lightspeed * lightspeed

int main(void)
{
  float mass = 1;
  float lightspeed = 299792458;
  
  printf("%.1f 公斤物體, 轉換為能量為 %.1f 焦耳\n", mass, ENERGY);
  printf("\t或 %.3E 焦耳\n", ENERGY);
  return 0;
}

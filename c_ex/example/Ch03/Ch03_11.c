#include <stdio.h>

int main(void)
{
  int height=3952;

  printf("玉山海拔 %08ld 公尺\n",height);
  printf("玉山海拔 %-0+8ld 公尺\n",height);
  printf("玉山海拔 %08+ld 公尺\n",height);
  printf("\a");
  return 0;
}

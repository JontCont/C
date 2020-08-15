#include <stdio.h>

void addsum(void);

int main(void)
{
  int i;

  for (i=0; i<3; i++)
    addsum();

  return 0;
}

void addsum(void)
{
  static int number=100;   // 改用內部靜態變數 

  printf("number=%d\n", number++);
}

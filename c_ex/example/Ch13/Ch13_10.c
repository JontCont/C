#include <stdio.h>
#define DATA 1  // 定義 DATA 為 1 
#include "name.h"

int main(void)
{
  printf("姓名: %s\n",PNAME);
  printf("年齡: %d\n",AGE);
  printf("血型: %c\n",BLOODTYPE);
  printf("工作: %s\n",JOB);
  return 0;
}

#include <stdio.h>
int max(int t[]);
void sort(int t[]);

int main()
{
  int i,x[5];

  printf("please input num: ");
  for (i=0; i<5; i++) {
    scanf("%d",&x[i]);
  }

  printf("max value: %d\n",max(x));
  printf("Sort value:");
  sort(x);

  return 0;
}


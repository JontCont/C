#include <stdio.h>
#include <stdlib.h>

void sort(int t[]);
int main()
{
  int i,x[5];
  printf("please input num: \n");
  for (i=0; i<5; i++) 
    scanf("%d",&x[i]);

	sort(x);

  return 0;
}

void sort(int x[])
{
	int i,j=0,t=0;
	for(i = 0 ;i<5 ; i++)
	{
		for(j = i+1 ;j<5 ; j++)
			if(x[i]>x[j])
			{
				t=x[i];
				x[i]=x[j];
				x[j]=t;
			}
	}
	for(i=0;i<5;i++)
		printf("%d ", x[i]);
}
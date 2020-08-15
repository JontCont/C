#include <stdio.h>
int find_max(int[], int);

int main(void)
{
  int number1[] = {49,62,199,23,57};
  int number2[] = {15,86,72,65,46,44,66,33};
  
  // ㊣盢皚肚耞程ㄧΑ 
  printf("number1[] 程 %d\n",find_max(number1, 5));
  printf("number2[] 程 %d\n",find_max(number2, 8));

  return 0;
}

int find_max(int number[], int size) // 耞程ㄧΑ 
{
  int max=0,i;
    
  for (i=0;i<size;i++)  // 硋ゑ耕–じ 
    if(number[i]>max) max=number[i];

  return max;
}

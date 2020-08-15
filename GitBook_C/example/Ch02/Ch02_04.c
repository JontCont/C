#include <stdio.h>

int main(void)
{
  printf("short int 的長度: %d\n",sizeof(short int));
  printf("long int 的長度: %d\n",sizeof(long int));
  printf("long long 的長度: %d\n",sizeof(long long));
  
  printf("unsigned short int 的長度: %d\n",
          sizeof(unsigned short int));
  printf("unsigned long int 的長度: %d\n",
          sizeof(unsigned long int));
  printf("unsigned long long 的長度: %d\n",
          sizeof(unsigned long long));        
  
  printf("long double 的長度: %d\n",
          sizeof(long double));

  return 0;
}

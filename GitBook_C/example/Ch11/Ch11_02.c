#include <stdio.h>

int main(void)
{
  int    *intptr;    // 宣告整數型別的指位器 
  char   *charptr;   // 宣告字元型別的指位器 
  float  *floatptr;  // 宣告浮點數型別的指位器 
  double *doubleptr; // 宣告倍精數型別的指位器 

  printf("各種型別指位器的容量大小\n");
  printf("intptr    = %d bytes\n",sizeof(intptr));
  printf("charptr   = %d bytes\n",sizeof(charptr));
  printf("floatptr  = %d bytes\n",sizeof(floatptr));
  printf("doubleptr = %d bytes\n",sizeof(doubleptr));

  return 0;
}

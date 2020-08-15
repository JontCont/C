#include <stdio.h>

int main(void)
{
  int   *iptr, age=19;        // 宣告整數型別指位器與變數 
  float *fptr, weight=64.5;   // 宣告浮點數型別指位器與變數 
  char  *cptr, bloodtype='A'; // 宣告字元型別指位器與變數 

  iptr=&age;                  // iptr 指向 age 的位址 
  fptr=&weight;               // fptr 指向 weight 的位址 
  cptr=&bloodtype;            // cptr 指向 bloodtype 的位址 
  
  printf("年齡: %d 歲\n",*iptr);
  printf("體重: %.1f 公斤\n",*fptr);
  printf("血型: %c 型\n",*cptr);

  return 0;
}

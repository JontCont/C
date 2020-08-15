#include <stdio.h>

int main(void)
{
  int num1,num2;  // 璶―程そ计ㄢ计 
  int a,b,c;      // ㄌΩ埃计砆埃计緇计 

  printf("叫块ㄢ计: ");

  scanf("%d %d", &num1, &num2);
  b=num1;         // 盢块计1 讽Θ砆埃计 
  c=num2;         // 盢块计2 讽Θ緇计 

  while(c!=0)     // 璸衡劣锣埃癹伴 
  {
    a=b;          // ﹚玡Ω埃计穝砆埃计 
    b=c;          // ﹚玡Ω緇计穝埃计 
    c=a%b;        // ―穝緇计 
  }

  printf("%d 籔 %d 程そ计琌 %d\n",num1,num2,b);

  return 0;
}

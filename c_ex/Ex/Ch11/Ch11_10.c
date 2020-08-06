#include <stdio.h>
void swap(int*,int*);  // 把计竟 

int main(void)
{
  int a=5,b=10;

  printf(" main()い...\n");
  printf("ユ传玡 a=%d,b=%d\n",a,b); // 块ユ传玡跑计㎝
  printf("跑计 a  %p\n",&a);
  printf("跑计 b  %p\n",&b);

  swap(&a,&b); // ㊣ㄧΑ, 璶ノ & 眔跑计 a,b 
               // ボ肚倒ㄧΑ琌跑计τ獶跑计
  printf(" main()い...\n");
  printf("ユ传 a=%d,b=%d\n",a,b);  // 块ユ传 
  printf("跑计 a  %p\n",&a); // の跑计 
  printf("跑计 b  %p\n",&b);

  return 0;
}

void swap(int *a,int *b)  // 把计琌竟 
{
  int temp;  // ユ传计筁祘い, ノㄓ既计跑计

  temp=*a;
  *a=*b;
  *b=temp;
  printf(" swap() ㄧΑい...\n");
  printf("ユ传い *a=%d,*b=%d\n",*a,*b);      // 块ㄧΑいユ传 
  printf("竟 a ┮ %p\n",a);  // 跑计㎝ 
  printf("竟 b ┮ %p\n",b);
}

#include <stdio.h>
void swap(int,int); // 盢 2 跑计癸秸ㄧΑ 

int main(void)
{
  int a=5,b=10;

  printf(" main()い...\n");
  printf("ユ传玡 a=%d,b=%d\n",a,b); // 块ユ传玡跑计㎝
  printf("跑计 a  %p\n",&a);
  printf("跑计 b  %p\n",&b);

  swap(a,b);  // ㊣ㄧΑ, 盢 a,b 跑计肚倒ㄧΑ 
  printf(" main()い...\n");
  printf("ユ传 a=%d,b=%d\n",a,b);  // 块ユ传 
  printf("跑计 a  %p\n",&a); // の跑计 
  printf("跑计 b  %p\n",&b);

  return 0;
}

void swap(int a,int b)
{
  int temp;  // ユ传计筁祘い, ノㄓ既计跑计

  temp=a;
  a=b;
  b=temp;
  printf(" swap() ㄧΑい...\n");
  printf("ユ传い a=%d,b=%d\n",a,b);  // 块ㄧΑいЫ场跑计
  printf("跑计 a  %p\n",&a); // ㎝
  printf("跑计 b  %p\n",&b);
}

#include <stdio.h>

int main(void)
{
  
  char str1[]={'S','u','p','e','r','m','a','n','\0'};  // 自行補上結束字元 
  char str2[]={'H','e','l','l','o',',',' ','W',
               'h','e','r','e',' ','i','s',' '};       // 未加上結束字元  
                                                       
  printf("str1 : %s\n",str1);  // 輸出陣列 str1 內容 
  printf("str2 : %s\n",str2);  // 輸出陣列 str2 內容 
  return 0;
}

#include <stdio.h>
#define SIZE 11  // 陣列大小 

int main(void)
{
  char msg[SIZE]={'H','e','l','l','o',' ','W','o','r','l','d'};
  char *ptr= msg;  // 指位器指向陣列 
  int i=0;
  
  for(i=0;i<SIZE;i++)
  {
    putchar(*ptr);
    ptr+=1;        // 將指位器的值加 1 
  }
  printf("\n");
  
  for(i=0;i<SIZE;i++)  // 此迴圈將陣列變數當指位器操作 
  {
    if(*(msg+i)>=97 && *(msg+i)<=122 )  // 若是小寫字元 
      *(msg+i) = (*(msg+i)-32);         // 就轉成大寫 (ASCII 值減 32) 
    putchar(*(msg+i)); // 用指位器加法, 取得各元素值
  }

  return 0;
}

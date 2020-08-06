#include <stdio.h>

int main(void)
{
  char name[16];  // 宣告一字元型別的陣列 
  
  // 將字串內容依序填入陣列中 
  name[0]='R'; name[1]='o'; name[2]='b';
  name[3]='e'; name[4]='r'; name[5]='t';
  name[6]='\0';

  printf("name: %s\n",name);

  return 0;
}

#include <stdio.h>

struct employee
{
  int  id;           // 員工編號 
  char name[12];     // 員工姓名 
} emp={1, "王大明"}; // 宣告結構體變數, 並指定初始值 

int main(void)
{
  struct employee *ptr; // 把結構體變數宣告成指位器 
  ptr=&emp;  
  
  // 用直接存取算符 . 取得成員的數值 
  printf("員工編號: %05d\n",(*ptr).id);
             
  // 用間接存取算符 -> 取得成員的數值
  printf("員工姓名: %s\n", ptr->name);

  return 0;
}

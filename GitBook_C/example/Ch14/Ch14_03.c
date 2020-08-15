#include <stdio.h>

struct person
{
  char name[7];  // 學生姓名 
  char addr[7];  // 戶籍
  int  age;      // 年齡 
} student[4]={"王小明","台北市",18,  // 設定初始值 
              "陳小華","新竹市",17,
              "林小玉","彰化縣",19,
              "蔡小貓","台中市",17};

int main(void)
{
  int i;         // 迴圈變數 

  printf("姓名\t\t戶籍\t\t年齡\n");
  for(i=0;i<4;i++)
    printf("%s\t\t%s\t\t%d\n",student[i].name,
          student[i].addr,student[i].age);

  return 0;
}

#include<stdio.h>
typedef struct  // 定義結構體的新資料型別 
{
  char name[10];
  char addr[10];
  int  age;
} PERSON;

int main(void)
{
  PERSON student={"王","台灣",20};
  printf("%s先生在 %d 歲時搬到%s居住\n",
        student.name, student.age, student.addr);

  return 0;
}

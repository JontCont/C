#include <stdio.h>

int main(void)
{
  int balance, income, expense;
  income = 25000;
  expense= 3500;

  balance= income + -expense; // 結餘等於收入加上支出 
  printf("本月的結餘 %d\n",balance);

  return 0;
}

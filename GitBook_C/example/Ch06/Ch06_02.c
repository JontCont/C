#include <stdio.h>

int main(void)
{
  int integer;

  printf("�P�_������, �п�J�@�ӼƦr: ");
  scanf("%d",&integer);
  
  // �P�_ integer �O�_�i�Q 2 �㰣 (�l�Ƭ� 0) 
  if (integer%2 == 0)	
  {          // ���u, �q�ù���X�O���ƪ��T�� 
  	printf("%d �O����!!\n", integer);  
  }
  else
  {			// ����, �q�ù���X�O��ƪ��T�� 
    printf("%d �O���!!\n", integer);  
  }
  
  return 0;
}
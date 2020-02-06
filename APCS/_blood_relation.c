/*
��4�D ��t���Y
   ���D�y�z
      �p�t���@�Ӥj�a�ڡC���@�ѡA�L�o�{�O����Ӯa�ڦ����M��������t���Y���a�ڱ�
      �СC �p�t ���̻�����t���Y (�ڭ̺٤��� "��t�Z�� ") ���h���P��ܦn�_�C
      0�O 7�� �Ĥl 1�B 2�M 3�O 0�� �Ĥl 4�M 5�O 1�� �Ĥl 6�O 3�� �Ĥl �C
      �ڭ̥i�H�������o�{�̻����˱����Y��4(�� 5)�M 6�A�L�̪� "��t�Z�� "�O 4 (4~1 1~00~3 3~6)�C
      �������@�a�ڪ����Y�ϡA�� ��X�̻���"��t�Z�� "�C�A�i�H���]�u���@�ӤH�O��Ӯa��
      �����������A�ӥB�S����Ӧ������P�˪��p�ġC
   ��J�榡
      �Ĥ@�欰�@�ӥ����n �N�� �������ӼơA �C�H�H 0~n-1�������@���s���N��C ����
      �� n-1�� �C�榳��ӥH�@�Ӫťչj�}����� a�P b (0 ? a,b ? n- �N�� b�O a��
      �Ĥl �C
   ��X�榡
      �C�������X�@��̻�"��t�Z�� "�����סC
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 10000

int tree[MAX][2]={{0}}; //��t���Y��
int maxD = 0;//�̻����Y
int n;//scanf
int Child_NO[MAX] = {0};//�P�_����
int isChild[MAX] = {0};//�O���Ĥl


int DFS(int x) {
   if (Child_NO[x] == 0) return 0;//�S���p�ġA���j����

   else if (Child_NO[x] == 1)
   {
        for(int j=0 ; j<n-1 ; j++)
         {
            if(tree[j][0]==x)
            {
            return DFS(tree[j][1])+1;//�^�ǲ`��+1
            }
         }

    }
   else 
   {//�p�ĶW�L��ӥH�W
      int max1=0 , max2 = 0 ;
      for(int j=0 ; j<n-1 ; j++) 
      {
        if(tree[j][0]==x)
        {
            int dfsresult = DFS(tree[j][1])+1;
            if (dfsresult > max1)
            {
                int tmp = dfsresult;
                dfsresult = max1;
                max1 = tmp;
            }
            if (dfsresult > max2) max2 = dfsresult;
        }
      }
      if(maxD<max1+max2) maxD = max1 + max2 ;
      return max1;
   }
}

int main() {
   scanf("%d", &n);
    for (int i = 0; i<n-1; i++) 
    {
        scanf("%d %d", &tree[i][0], &tree[i][1]);
        Child_NO[tree[i][0]]+=1;
        isChild[tree[i][1]] = 1;
    }
    int root;

    //��Xroot
    for (int i = 0; i < n; i++) 
    {
        if (isChild[i]==0) 
        {//�u�n���O�p�ġA�N�Oroot
            root = i;
            break;
        }
    }

    int ResultRoot = DFS(root);
    if(ResultRoot > maxD) printf("%d",ResultRoot);
    else printf("%d", maxD);
      
    return 0;
}
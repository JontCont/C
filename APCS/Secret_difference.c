/*
���D�y�z
    �N�@�ӤQ�i�쥿��ƪ��_�Ʀ�ƪ��M�٬�
    A �A���Ʀ�ƪ��M�٬� B �A�h A �P B ����
    ��t�� |A B| �٬��o�ӥ���ƪ����K�t�C
    �Ҧp�G
    263541 ���_�Ʀ�ƪ��M A = 6+5+1 = 12 �A���Ʀ�ƪ��M B = 2+3+4 = 9 �A�ҥH
    263541 �����K�t�O |12 9|= 3 �C
    ���w�@�ӤQ�i�쥿��� X �A�Ч�X X �� ���K�t �C
    
    ��J�榡
        ��J���@��t ���@ �ӤQ�i���ܪk�� ����� X �A����O�@�Ӵ���r�� �C
    ��X�榡
        �п�X X �� ���K�t Y �H�Q�i���ܪk��X ))�A�H����r������ �C

*/

#include <stdio.h>
#include <string.h>

int main ()
{
    char num[1001];
    printf("���K�t output >>> \n");
    scanf("%s",&num);
    int A=0,B=0;
    int strsum= strlen(num);
        
    for(int j=0;j<strsum;j+=2)
    {
        B+=num[j]-'0';
    }
    for(int i =1;i<strsum;i+=2)
    {
        A+=num[i]-'0';
    }
    int sum = A-B;
    printf("%d",sum);

   
    
}
/*
�̤j�M
    ���D�y�z
        ���w N�s�Ʀr �A�C �s���꦳ M�ӥ���� �C
        �Y�q �C�s�Ʀr ���U��ܤ@�ӼƦr (���]�� i�s�ҿ�X�Ʀr�� ti )�A�N�ҿ�X���A
        �N�ҿ�X�� N�ӼƦr�[�`�Y�i�o�M S = S = S = S = t1+t2+�K+ +�K+ tN�C
        �мg�{ ���p�� S���̤j�� (�̤j�`�M )�A�çP�_�U�s�ҿ�X���Ʀr�O �_�i�H�㰣 S�C
    ��J�榡
        �Ĥ@�榳�G�ӥ���� N�M M�A 1�� N �� 20 �A1�� M �� 20 �C
        ���U�Ӫ� N�� �A�C�@�U�� M�ӥ���� xi �A�N��@�s��ơA 
        �Ʀr�P�����@�Ӫ� ��A�B 1�� i ��M�A�H�� 1�� xi ��256 �C
    ��X�榡
        �Ĥ@���X�̤j�`�M S�C
        �ĤG����ӳQ��ܼƦr���ݸs�����ǡA��X�i�H�㰣 S���Q��ܼƦr�A
        �Ʀr�P�Ʀr���H�@�ӪŮ�j�} �A�̫�@�ӼƦr�L�ťաF
        �Y N�ӳQ��ܼƦr������㰣 S�A�N��X -1�C
*/

#include <stdio.h>

int main()
{
    int i,j,k;//for=> use
    int m,n;// first math
    int num,sum;//all enter math and quite sum
    int max_set[20]={0};//save data
    int record,bak_key=0; 
    scanf("%d %d",&m,&n); //set first math
    
    for(i=0 ;i< m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&num);
            if(max_set[i]<num) max_set[i] = num;
        }
        sum+=max_set[i];
    }
    printf("%d\n",sum);

    for(i=0 ; i < m;i++)
    {
        if((sum % max_set[i])==0)
           {
               printf("%d ",max_set[i]);
               bak_key =1;
           } 
    }
    if(bak_key == 0) printf("-1");
}  
/*
�w�� K �u  
    ���D�y�z
        �u�w�� K �u�v�O�@�ӹαd�C���AN �ӤH�򦨤@�Ӱ�A
        �� 1 ���̧Ǩ� N ���A�q 1 ���} �l�̧Ƕǻ��@�T���㬵�u�A
        ���u�C����� M �ӤH�N�|�z���A���H�Y�^�O�A�Q�^�O���H�n���}���A
        �M�ᬵ�u�A�q�Ӳ^�O�̪��U�@�Ӷ}�l�ǻ��C
        �C�����ҥH�� K �u�O�]���o�T���u�u�|�z�� K ���A
        �b�� K ���z����A�C���Y����A
        �Ӧ��ɦb�� K �Ӳ^�O�̪��U�@��C���̳Q�٬����B�̡A�q�`�N�|�Q�n�D��t�`�ءC
        �Ҧp N=5�AM=2�A�p�G K=2�A���u�|�z���⦸�A�Q�z���^�O�����Ķ̌ǬO 2 �P 4�]�Ѩ��U�ϡ^�A
        �o�� 5 ���N�O ���B�̡C�p�G K=3�A��~���C���|�~��A�ĤT�Ӳ^�O���O 1 ���A�ҥH���B�̬O 3 ���C 
        �p�G K=4�A�U�@���^�O 5 ���A�ҥH 3 ���O���B�̡C 
        ���w N�BM �P K�A�мg�{���p��X�֬O���B�̡C 

    ��J�榡 
        ��J�u���@��]�t�T�ӥ���ơA
        �̧Ǭ� N�BM �P K�A��Ƥ������@�ӪŮ���}�C�䤤 1 ? K<N�C 
 
    ��X�榡 
        �п�X���B�̪����X�A����������Ÿ��C 
*/


#include <stdio.h> 
#include <stdlib.h> 

int main()
{ 
    int N,M,K; 
    int member[20]={0};
    int n,i,j,now=0;

    scanf("%d %d %d",&N,&M,&K);
    for(i = 0; i<N ; i++)
        member [i]=i+1;
        for(i=0;i<K;i++)
         {
            now = (now + M -1) %N;
            for(j =now ; j<N-1;j++)
                member[j]=member[j+1];
                N-=1;
         }
         printf("%d\n",member[now%N]);
}
/*
�βy�C��
    ���D�y�z
        �����̪�g�W�βy�A�L�Q�ۤv�g�@��²�ƪ��βy�C���p���{���C�o�ӵ{���|Ū�J�y��
        ���C��y�����������G�A�M��p��X�y�����o���C
        �o�O��²�ƪ��������A���]���y�����������G�u���H�U���p�G
            (1) �w���G�H 1B, 2B, 3B �M HR ���O�N��@�S���B�G�S���B�T�S���M���]�|�^�S���C
            (2) �X���G�H FO, GO, �M SO ��ܡC
    �o��²�ƪ����W�h�p�U�G
            (1) �y���W���|���S�]�A�٬����S�B�@�S�B�G�S�M�T�S�C
            (2) ���b���S���۲y�Υ��y���٬��u���y���v�A���b�t�~�T���S�]���٬��u�]�S���v�C
            (3) �����y�����������G���u�w���v�ɡA���W�y���]���y���P�]�S���^�i�H���ʡF��
                �G���u�X���v�ɡA�]�S�����ʡA���y�������A���U�@�����y���C
            (4) �y���`�@���E��y���A�̧ǱƦC�C���ɶ}�l�Ѳ� 1 ��}�l�����A��� i ��y����
                ��������A�Ѳ� (i+1) ��y��������y���C��ĤE��y��������A�h���^�Ĥ@��y���C
            (5) ���X K �S���ɡA���W�y���]���y���M�]�S���^�|�e�i K ���S�]�C�q���S�e�i
                �@���S�]�|���ʨ�@�S�A���۬O�G�S�B�T�S�A�̫�^�쥻�S�C
            (6) �C��y���^�쥻�S�ɥi�o 1 ���C
            (7) �C�F��T�ӥX���ƮɡA�@�B�G�M�T�S�N�|�M�š]�]�S�����o���}�^�A���s�}�l�C
    ��: �мg�X��Ƴo�˥\�઺�{���A�p��y�����`�o���C
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{   
    char hit_info1[50];
    char temp1,temp2;
    int round;
    int i,j; 

    for(i=0; i<9;++i)
    {
        scanf("%d",&round);
        for(j= 0 ;j<round;++j)
        {
            scanf(" %c%c",&temp1,&temp2);
            if(temp2 =='O')
                hit_info1[j*9+i] ='O';
            else 
                hit_info1[j*9+i] =temp1; 
        }
    }    

    int score=0,out = 0,base[4]={0},index =0,b;    //���� �X�� �S�]
            
    scanf(" %d",&b);
    while (b>0)
    {
        if(hit_info1[index] == 'O')//out base
        {
            out++;
            if(out%3==0) 
            {
                base[0]=0; base[1]=0; base[2]=0; base[3]=0;
                out=0;
            }
            b--;
        }
        else if(hit_info1[index] =='1')  //1B
        {
            score += base[2];
            base[2] =base[1]; 
            base[1] =base[0]; 
            base[0] =1;
        }

        else if(hit_info1[index] == '2') //2B
        {
            score += base[2] + base[1];
            base[2] =base[0];
            base[1] =1;
            base[0] =0;
        }

        else if(hit_info1[index] == '3') //3B
        {
            score += base[2] + base[1] + base[0];
            base[2] =1;
            base[1] =0;
            base[0] =0;
        }

        else if(hit_info1[index] == 'H') //HR
        {
            score +=  base[2] + base[1]+ base[0] + 1; 
            base[0]=0;
            base[1]=0;
            base[2]=0;
            base[3]=0;   
        }
        index++;
    }
    printf("%d",score);
}
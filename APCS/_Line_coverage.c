/*
�� 3 �D �u�q�л\����
���D�y�z
���w�@���y�ФW�@�ǽu�q�A�D�o�ǽu�q���л\�����סA�`�N�A���|�������u���@
���C�Ҧp���w�T�ӽu�q�G(5, 6)�B(1, 2)�B(4, 8)�B�M(7, 9)�A�p�U�ϡA�u�q�л\���׬�
6�C

��J�榡�G
�Ĥ@�C�O�@�ӥ���� N�A��ܦ����ծרҦ� N �ӽu�q�C
���۪� N �C�C�@�C�O�@�ӽu�q���}�l���I�y�ЩM�������I�y�о�ƭȡA�}�l���I
�y�ЭȤp�󵥩󵲧����I�y�ЭȡA��̤����H�@�ӪŮ�Ϲj�C

��X�榡�G
��X���`�л\������ �C
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int line_num;
    scanf("%d",&line_num);
    int i,j,line_stat,line_end;
    int max=0,min=1000;
    int line[1000]={0};
    for(i=0; i < line_num;i++)
    {
        scanf("%d %d",&line_stat,&line_end);
        for(j=line_stat;j<line_end ;j++){line[j]=1;}

        if(line_stat > max) max = line_stat;
        if(line_end > max) max = line_end;
        if(line_stat<min) min = line_stat;
        else if(min > line_end) min = line_end;
    }
    int num=0;
    for(j=min;j<=max;j++){ if(line[j]== 1) num++; }
    if(max==min){printf("0");}
    else {printf("%d \n",num);}
}
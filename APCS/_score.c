/*
���Z����
	���D�y�z
		�@���Ҹդ� ��Ҧ��ή�ǥͤ�����̧C���ƪ̳̬����B�A�Ϥ��A��Ҧ����ή�P
		�Ǥ��A����̰����ƪ̡A�i�H���O�̬������A�Ӧ��G�ؤ��ơA�i�H�������Z���� �C
		�ЧA�]�p�@��{���AŪ�J���Z���Z �H�Ƥ��T�w �й�Ҧ����ƶi��ƧǡA�ä��O
		��X���ή椤�̰����ƥH�Τή椤�̧C���� �C
		��䤣��̧C�ή���ơA��ܹ�󥻦��ҸզӨ��A�o�O�@�Ӥ������Z�šA���ɽЧA
		�L�X�G�u worst case �v�F�Ϥ��A��䤣��̰����ή���ƮɡA�ЧA�L�X�u best case �v�C
	���G���]�ή���Ƭ�60 �C������Ҭ� 0~1 00 ����ơA�B���ƥ��w�C

��J�榡
	�Ĥ@���J
		�ǥͤH �ơA�ĤG�� �� �U �ǥ� ���� (0~100 �� ))�A���ƻP���Ƥ��� �H�@�Ӫťն���C 
		�C�@�����ꪺ�ǥͤH�Ƭ� 1 20 ����ơC

��X�榡
	�C�������X�T��C
	�Ĥ@��
		�Ѥp�Ӥj�L�X�Ҧ����Z�A��Ʀr�����H�@�Ӫťն���A�̫�@�ӼƦr��L�ť�
	�ĤG�� 
		�L�X �̰����ή���� �p�G ���Ƥή�ɡA�󦹦�L�X best case
	�ĤT��
		�L�X�̧C�ή���ơA����Ƥ��ή�ɡA�󦹦�L�X worst case �C
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int round,score[20],i,j,temp;
	printf("enter people >>");
	scanf("%d",&round);
	printf("enter score >>");
	for(i=0;i<round ; i++)
		scanf("%d",&score[i]);

	for(i=0;i<round;i++)
		for(j=i+1;j<round;j++)
			if(score[i]>score[j])
			{
				temp = score[i];
				score[i]=score[j];
				score[j]=temp;
			}
	for(i = 0 ; i<round;i++)
		printf("%d ",score[i]);

	int first=0,second=0,flag_1=0,flag_2=0;
	for(i = 0 ; i < round ;i++)
		if(score[i]<60)
		{
			first = score[i];
			flag_1 = 1;
		}
		else if(score[i]>=60)
		{
			second =score[i];
			flag_2 = 1;
			break;
		}

	if(flag_1 == 1 && flag_2 == 1)
	{
		printf("\n%d ",first);
		printf("\n%d",second);
	}	
	else 
	{
		if(second >= 60)
		{
			printf("\n%d",second);
			printf("\nbest case");
		}
		else
		{
			printf("\n%d",first);
			printf("\nworst case");
		}
	}
}

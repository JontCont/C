/*
�p�s��
���D�y�z
    Q�P�ǥ��b�ǲߵ{���A P �Ѯv�X�F�H�U���D�����L�m�ߡC
    �@�s�H�b�@���ɸg�`�|�Φ��@�Ӥ@�Ӫ��p
    �s ��C���]�� N �ӤH�A�s���� 0 �� N 1 �A�C
    �ӤH�m�g�U�L�̦n�B�ͪ��s���]�̦n�B�ͦ��i��O�L�ۤv���s���A�p�G�L�ۤv�S����
    �L�n�͡^�A �b���D���A �C�ӤH�� �n�ͽs�����藍�|���ơA�]�N�O�� 0 �� N 1 �C�ӼƦr
    �m ��n �X�{�@�� �C
    �o�ئn�ͪ����Y�|�Φ��@
    �� �p �s ��C�Ҧp N=10 �A
    �n�ͽs���p�U   0 1 2 3 4 5 6 7 8 9
    �n�ͽs�� 4 7 2 9 6 0 8 1 5 3 0
    ���n�ͬO 4 4 ���n�ͬO 6 6 ���n�ͬO 8 8 ���n�ͬO 5 5 ���n�ͬO 0 �A�ҥH 0 �B 4 �B
    6 �B 8 �B�M 5 �N�Φ��F�@�Ӥp�s��C�t�~�A 1 ���n�ͬO 7 �ӥB 7 ���n�ͬO 1 �A�ҥH 1 �M
    7 �Φ��t�@�Ӥp �s ��A�P�z�A 3 �M 9 �O�@�Ӥp �s ��A�� 2 ���n�ͬO�ۤv�A�]���L �ۤv
    �O�@�Ӥp �s �� �C�`�Ө����A �b�o �ӨҤl �̦� 4 �Ӥp �s �� 0 4 6 8 5 �B { �B { �B
    { �C ���D�����D�O�G��J�C�ӤH���n�ͽs���A�p��X�`�@���X�Ӥp�s��C
    Q
    �P�ǷQ�F�Q�o�����p��U��A�Mħ�i�˪� P �Ѯv��O���F�L�H�U�����ܡG�p�G�A�q
    ����@�H x �}�l�A�l�ܥL���n�͡A�n�� ���n�͡A �A�K�K..�A�o�ˤ@���U�h�A�@�w�|�Φ��@
    �Ӱ�^�� x �o�N�O�@�Ӥp�s��C�p�G�ڭ̰l�ܪ��L�{����l�ܹL���[�H�аO�A�ܮe
    �����D���ǤH�w�g�l�ܹL�A�]���A��@�Ӥp�s���줧��A�ڭ̦A�q����@���٥��l
    �ܹL���}�l�~���U�@�Ӥp�s��A����Ҧ����H�m�l�ܧ����C
    Q
    �P��ť������ܶ��Q�������F�@�~�C
    �b���D���A�A�����ȻP
    Q �P�Ǥ@�ˡG���w�@�s�H���n�͡A�Эp��X�p�s��ӼơC

��J�榡
    �Ĥ@�� �O�@�� ����� N �A�������餤�H�ơC
    �ĤG�� �̧ǬO 0 ���n�ͽs�� �B 1 ���n�ͽs�� �B �B N 1 ���n�ͽs���C�@ �� N �ӼƦr�A
    �]�t 0 �� N 1 ���C�ӼƦr��n�X �{�@�� �A�Ʀr���|���@�Ӫťչj�}�C
��X�榡
    �п�X�p
    �s �骺�ӼơC ���n������h�l���r�ΪťաA�� �H����r������ �C

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count = 0;
    int number, j, k;

    scanf("%d", &number);
    int num_x[1000] = {0};
    int num_y[1000] = {0};

    for (int i = 0; i < number; i++)
        scanf("%d", &num_x[i]);

    for (k = 0; k < number; k++)
    {
        if (num_y[k] == 0)
        {
            count++;
            num_y[k] = 1;
            j = num_x[k];
            while (j != k)
            {
                num_y[j] = 1;
                j = num_x[j];
            }
        }
    }
    printf("%-2d", count);

    return 0;
}
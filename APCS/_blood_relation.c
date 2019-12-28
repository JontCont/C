#include <stdio.h>

/*
�i���D����j
�̻����Y�ȷ|�o�ͦb�G
1. �q������L�Ĥl����
2. �q�L�Ĥl������L�Ĥl����
�]���i�H�ǥѲ`���u���j�M�q�������L�Ĥl�����A�åβ`�ק�X�q������L�Ĥl��������t�Z��
�P�ɦA�L�{���Y���`�I�����H�W���Ĥl�h�i�H�ǥѨ�ӫĤl�i�쪺�̲`�`�רӺ�X�o��ӫĤl������t�Z���]�ѩ󳣬O�̲`�A�ҥH�ۥ[�N�O�̻��^
�`���u���j�M�k�G�u�����U�M��A�u�줣�੹�U�~���^����A�i�H�Ѧ�http://simonsays-tw.com/web/DFS-BFS/DepthFirstSearch.html
*/


int tree[99999][2]={{0}};//��t���Y��(�ȰO���ˤl���Y)

int n;
int maxChildrenDistance=0;//�q�L�Ĥl������L�Ĥl�������̻����Y
int isChild[100000]={0};//�P�_�O�_������(�Y�L�h��)
int childrenCount[100000]={0};//�O�����h�֫Ĥl

//�`���u���j�M�A�^�ǲ`�ס]���U�i�쪺�̻��Ĥl�Z���^
int dfs(int i)
{
    //�p�G�S���p��(���I)
    if(childrenCount[i]==0)
    {
        //�ѩ�S����`�^��0
        return 0;
    }
    //�p�G�u���@�Ӥp��
    else if(childrenCount[i]==1)
    {
        for(int j=0;j<n-1;++j)
        {
            if(tree[j][0]==i)
            {
                //�^�Ǥp�Ĳ`��+1(�Ĥl�`�ץ[�ۤv)
                return dfs(tree[j][1])+1;
            }
        }
    }
    //�h�Ӥp��
    else
    {
        int max1=0,max2=0;//�O��i��L�Ĥl�����̻��M�ĤG��
        //�j�M�Ҧ��`�Ii���p��
        for(int j=0;j<n-1;++j)
        {
            if(tree[j][0]==i)
            {
                //���j���U�d���L�Ĥl�������`��
                int dfsResult=dfs(tree[j][1])+1;
                //�վ�̻��M�ĤG��
                if(dfsResult>max1)
                {
                    int temp=dfsResult;
                    dfsResult=max1;
                    max1=temp;
                }
                if(dfsResult>max2)
                {
                    max2=dfsResult;
                }
            }
        }
        //�p�G�̻�(���]��a�`�I)�[�ĤG��(���]��b�`�I)��w���̻��L�Ĥl������L�Ĥl�����Z���j
        //���a�g�Li��b���ثe�o�{�̻����L�Ĥl������L�Ĥl�Z��
        if((max1+max2)>maxChildrenDistance)
        {
            maxChildrenDistance=max1+max2;
        }
        return max1;
    }
}

int main()
{
    scanf(" %d",&n);
    for(int i=0;i<n-1;++i)
    {
        scanf(" %d %d",&tree[i][0],&tree[i][1]);
        //�p�⦳�X�Ӥp��
        childrenCount[tree[i][0]]+=1;
        //�O���O�_����L�H���p��
        isChild[tree[i][1]]=1;
    }

    //�M�䯪��
    int ancestor;
    for(int i=0;i<n;++i)
    {
        //�p�G���O��L�H���p�ĴN�O����
        if(!isChild[i])
        {
            ancestor=i;
            break;
        }
    }

    //�}�l�p��`�ס]�q������̻���t�Z���p�Ī��Z���^
    int dfsResultFromRoot=dfs(ancestor);

    //�p�G������̻���t�Z���p�Ī��Z���j��q�L�Ĥl������L�Ĥl�������̻��Z���h��X�e��
    if(dfsResultFromRoot>maxChildrenDistance)printf("%d",dfsResultFromRoot);
    //�p�G������̻���t�Z���p�Ī��Z���p��q�L�Ĥl������L�Ĥl�������̻��Z���h��X���
    else printf("%d",maxChildrenDistance);
    
    return 0;
}
#include <stdio.h>

/*
秆肈隔
程环闽玒度穦祇ネ
1. 眖礚Θ
2. 眖礚Θ礚Θ
虑パ瞏纔穓碝眖т礚Θノ瞏т眖礚Θ﹀絫禯瞒
筁祘い璝Τ竊翴Τㄢ玥虑パㄢ程瞏瞏ㄓ衡硂ㄢ丁﹀絫禯瞒パ常琌程瞏┮碞琌程环
瞏纔穓碝猭纔┕碝тぃ┕┕崩衡把σhttp://simonsays-tw.com/web/DFS-BFS/DepthFirstSearch.html
*/


int tree[99999][2]={{0}};//﹀絫闽玒攫(度癘魁克闽玒)

int n;
int maxChildrenDistance=0;//眖礚Θ礚Θ程环闽玒
int isChild[100000]={0};//耞琌Τダ(璝礚玥)
int childrenCount[100000]={0};//癘魁Τぶ

//瞏纔穓碝肚瞏┕程环禯瞒
int dfs(int i)
{
    //狦⊿Τ(狠翴)
    if(childrenCount[i]==0)
    {
        //パ⊿Τ瞏肚0
        return 0;
    }
    //狦Τ
    else if(childrenCount[i]==1)
    {
        for(int j=0;j<n-1;++j)
        {
            if(tree[j][0]==i)
            {
                //肚瞏+1(瞏)
                return dfs(tree[j][1])+1;
            }
        }
    }
    //
    else
    {
        int max1=0,max2=0;//癘魁i礚Θ程环㎝材环
        //穓碝┮Τ竊翴i
        for(int j=0;j<n-1;++j)
        {
            if(tree[j][0]==i)
            {
                //患癹┕琩т礚Θ瞏
                int dfsResult=dfs(tree[j][1])+1;
                //秸俱程环㎝材环
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
        //狦程环(安砞a竊翴)材环(安砞b竊翴)ゑ程环礚Θ礚Θ禯瞒
        //ボa竒筁ibヘ玡祇瞷程环礚Θ礚禯瞒
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
        //璸衡Τ碭
        childrenCount[tree[i][0]]+=1;
        //癘魁琌ㄤ
        isChild[tree[i][1]]=1;
    }

    //碝т
    int ancestor;
    for(int i=0;i<n;++i)
    {
        //狦ぃ琌ㄤ碞琌
        if(!isChild[i])
        {
            ancestor=i;
            break;
        }
    }

    //秨﹍璸衡瞏眖程环﹀絫禯瞒禯瞒
    int dfsResultFromRoot=dfs(ancestor);

    //狦程环﹀絫禯瞒禯瞒眖礚Θ礚Θ程环禯瞒玥块玡
    if(dfsResultFromRoot>maxChildrenDistance)printf("%d",dfsResultFromRoot);
    //狦程环﹀絫禯瞒禯瞒眖礚Θ礚Θ程环禯瞒玥块
    else printf("%d",maxChildrenDistance);
    
    return 0;
}
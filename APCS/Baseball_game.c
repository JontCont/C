/*
棒球遊戲
    問題描述
        謙謙最近迷上棒球，他想自己寫一個簡化的棒球遊戲計分程式。這個程式會讀入球隊
        中每位球員的打擊結果，然後計算出球隊的得分。
        這是個簡化版的模擬，假設擊球員的打擊結果只有以下情況：
            (1) 安打：以 1B, 2B, 3B 和 HR 分別代表一壘打、二壘打、三壘打和全（四）壘打。
            (2) 出局：以 FO, GO, 和 SO 表示。
    這個簡化版的規則如下：
            (1) 球場上有四個壘包，稱為本壘、一壘、二壘和三壘。
            (2) 站在本壘握著球棒打球的稱為「擊球員」，站在另外三個壘包的稱為「跑壘員」。
            (3) 當擊球員的打擊結果為「安打」時，場上球員（擊球員與跑壘員）可以移動；結
                果為「出局」時，跑壘員不動，擊球員離場，換下一位擊球員。
            (4) 球隊總共有九位球員，依序排列。比賽開始由第 1 位開始打擊，當第 i 位球員打
                擊完畢後，由第 (i+1) 位球員擔任擊球員。當第九位球員完畢後，則輪回第一位球員。
            (5) 當打出 K 壘打時，場上球員（擊球員和跑壘員）會前進 K 個壘包。從本壘前進
                一個壘包會移動到一壘，接著是二壘、三壘，最後回到本壘。
            (6) 每位球員回到本壘時可得 1 分。
            (7) 每達到三個出局數時，一、二和三壘就會清空（跑壘員都得離開），重新開始。
    註: 請寫出具備這樣功能的程式，計算球隊的總得分。
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
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

    int score=0,out = 0,base[4]={0},index =0,b;    //分數 出局 壘包
            
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
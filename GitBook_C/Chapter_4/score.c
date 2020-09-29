#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int count,score,sum = 0;
    float avg = 0;
    printf("請輸入幾科");
    scanf("%d",&count);
    printf("請輸入分數");
    for(int i =0;i<count;i++)
    {
        scanf("%d",&score);
        sum += score;
    }
    avg =(float) sum/count;
    printf("平均 %.1f",avg);

    return 0;
}

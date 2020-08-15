#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void GameInfo(void);
int IsWin(int a[3][3]);
int FindZero(int a[3][3]);
int LocationY(int zero);
void PrintMatrix(int a[3][3]);
int UpdateMatrix(int a[3][3]);

void GameInfo(void)
{
    printf("Play Game by WASD.\n");
}

int IsWin(int a[3][3])
{
    int flag = 0, i, j, RightNum = 1;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] == RightNum)
            {
                if (RightNum == 8 && a[2][1] == 8)
                {
                    flag = 1;
                    PrintMatrix(a);
                    printf("You Win! :)\nPress any key to exit.\n");
                    getch();
                    exit(-1);
                    return flag;
                }
                ++RightNum;
                continue;
            }
            else
                return flag;
        }
    }
    return flag;
}

void PrintMatrix(int a[3][3])
{
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}

int FindZero(int a[3][3])
{
    int i, j, counter = 0;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            counter++;
            if (a[i][j] == 0)
            {
                return counter;
                break;
            }
        }
    }
    return counter;
}

int LocationY(int zero)
{
    if (zero <= 3)
        return 1;
    else if (zero <= 6)
        return 2;
    else
        return 3;
}

int UpdateMatrix(int a[3][3])
{
    char move;
    int zero = FindZero(a);
    int zeroy = LocationY(zero) - 1;
    int zerox = (zero - 1) % 3;
    int temp;

    move = getch();
    switch (move)
    {
    case 97: //A:left
    {
        if (zerox == 0)
            printf("Input Error.");
        else if (!(zerox == 0)) //第一列?法向左
        {
            temp = a[zeroy][zerox];
            a[zeroy][zerox] = a[zeroy][zerox - 1];
            a[zeroy][zerox - 1] = temp;
        }
        break;
    }
    case 119: //W:up
    {
        if (zeroy == 0)
            printf("Input Error.");
        else if (!(zeroy == 0)) //第一行?法向上
        {
            temp = a[zeroy][zerox];
            a[zeroy][zerox] = a[zeroy - 1][zerox];
            a[zeroy - 1][zerox] = temp;
        }
        break;
    }
    case 100: //D:right
    {
        if (zerox == 2)
            printf("Input Error.");
        else if (!(zerox == 2)) //第三列?法向右
        {
            temp = a[zeroy][zerox];
            a[zeroy][zerox] = a[zeroy][zerox + 1];
            a[zeroy][zerox + 1] = temp;
        }
        break;
    }
    case 115: //S:down
    {
        if (zeroy == 2)
            printf("Input Error.");
        else if (!(zeroy == 2)) //第三行?法向下
        {
            temp = a[zeroy][zerox];
            a[zeroy][zerox] = a[zeroy + 1][zerox];
            a[zeroy + 1][zerox] = temp;
        }
        break;
    }
    default:
    {
        printf("Input Error.\n");
    }
    }
    return a[0][0];
}

int main(void)
{
    int a[3][3] = {{6, 1, 4}, {2, 0, 8}, {5, 7, 3}};

    while (!IsWin(a))
    {
        system("cls");
        GameInfo();
        PrintMatrix(a);
        a[0][0] = UpdateMatrix(a);
    }

    return 0;
}
#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

#pragma region Value_data
int X[4] = {0};
int Fx[4] = {0};
float PSx[4] = {0};
int set[4] = {0};
int newx[4] = {0};
int newBin[4][5] = {0};
int points[2] = {0};
int nubmer[2], bit[2] = {0};
int decNum[4] = {0};
int avg = 0;
#pragma endregion

void State();
void State_Points();
void State_nubBIT();
void OptionSet();
void NewX();
void binary();
void NewswBin();
void change();
void BintoDec();

int main(void)
{
    cout << "Enter Gene...\n";
    for (int i = 0; i < 4; i++)
        cin >> X[i];
    State();
    State_Points();
    State_nubBIT();
    OptionSet();
    NewX();
    binary();
    NewswBin();
    change();
    BintoDec();
    for (int i = 0; i < 4; i++)
    {
        printf("x:%-5d fx:%-5d psx:%-5.2f set:%-3d", X[i], Fx[i], PSx[i], set[i]);
        printf("newX: %-6d", newx[i]);
        printf("switch:");
        for (int j = 0; j < 5; j++)
        {
            printf(" %-3d", newBin[i][j]);
        }
        printf(" change: %-3d", decNum[i]);
        printf("\n");
    }
    system("pause");
    return 0;
}

void State()
{
    cout << "Crossover Points:";
    for (int i = 0; i < 4; i++)
    {
        Fx[i] = X[i] * X[i] - (2 * X[i]) + 5;
        avg += Fx[i];
    }
    avg /= 4;

    for (int i = 0; i < 4; i++)
        PSx[i] = (float)Fx[i] / avg;
}

void State_Points()
{

    for (int i = 0; i < 2; i++)
        cin >> points[i];
}

void State_nubBIT()
{
    for (int i = 0; i < 2; i++)
    {
        cout << i + 1 << ". nubmer and bit :";
        cin >> nubmer[i] >> bit[i];
    }
}

void OptionSet()
{
    int num = 0;
    float temp[4] = {0};
    while (num < 4)
    {
        for (int i = 0; i < 4; i++)
        {
            temp[i] = PSx[i] + 0.5;
            set[i] = temp[i];
            num += set[i];
        }

        if (num < 4)
        {
            num = 0;
            for (int i = 0; i < 4; i++)
            {
                temp[i] += 0.5;
                set[i] = temp[i];
                num += set[i];
                if (num == 4)
                    break;
            }
        }

        // cout << num;
    }
}

void NewX()
{
    for (int i = 0; i < 4; i++)
    {
        switch (set[i])
        {
        case 0:
            if (i == 0)
                newx[i] = X[i + 1];
            else
                newx[i] = X[i - 1];
            break;
        case 1:
            if (newx[i] == 0)
                newx[i] = X[i];
            break;
        case 2:
            if (i % 2 == 0)
            {
                newx[i] = X[i];
                newx[i + 1] = X[i];
            }
            if (i % 2 == 1)
            {
                newx[i] = X[i];
                newx[i - 1] = X[i];
            }
            break;
        }
    }
}

void binary()
{
    for (int i = 0; i < 4; i++)
    {
        int temp = newx[i];
        for (int j = 4; j >= 0; j--)
        {
            newBin[i][j] = temp % 2;
            temp = temp / 2;
        }
    }

    for (int i = 0; i < 4; i++)
    {
        printf("newX:  ");
        for (int j = 0; j < 5; j++)
            printf(" %d", newBin[i][j]);
        printf("\n");
    }
    printf("\n");
}

void NewswBin()
{
    int points1 = 4 - points[0];
    int points2 = 4 - points[1];
    for (int num = points1; num < 5; num++)
    {
        if (newBin[0][num] != newBin[1][num])
        {
            if (newBin[0][num] == 0)
            {
                newBin[0][num] = 1;
                newBin[1][num] = 0;
            }
            else
            {
                newBin[0][num] = 0;
                newBin[1][num] = 1;
            }
        }
    }
    for (int num = points2; num < 5; num++)
    {
        if (newBin[2][num] != newBin[3][num])
        {
            if (newBin[2][num] == 0)
            {
                newBin[2][num] = 1;
                newBin[3][num] = 0;
            }
            else
            {
                newBin[2][num] = 0;
                newBin[3][num] = 1;
            }
        }
    }

    for (int i = 0; i < 4; i++)
    {
        printf("Switch :");
        for (int j = 0; j < 5; j++)
        {
            printf(" %d", newBin[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void change()
{
    int bit1 = 4 - bit[0];
    int bit2 = 4 - bit[1];
    int nubmer1 = nubmer[0] - 1;
    int nubmer2 = nubmer[1] - 1;

    if (nubmer1 <= 0)
        nubmer1 = 0;
    if (nubmer2 <= 0)
        nubmer2 = 0;
    if (newBin[nubmer1][bit1] == 1)
        newBin[nubmer1][bit1] = 0;
    else
        newBin[nubmer1][bit1] = 1;
    if (newBin[nubmer2][bit2] == 1)
        newBin[nubmer2][bit2] = 0;
    else
        newBin[nubmer2][bit2] = 1;

    for (int i = 0; i < 4; i++)
    {
        printf("change :");
        for (int j = 0; j < 5; j++)
        {
            printf(" %d", newBin[i][j]);
        }
        printf("\n");
    }
}
void BintoDec()
{
    int dec[5] = {16, 8, 4, 2, 1};

    int num = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            num += dec[j] * newBin[i][j];
        }
        decNum[i] = num;
        num = 0;
    }
    for (int i = 0; i < 4; i++)
        cout << decNum[i] << "\n";
}
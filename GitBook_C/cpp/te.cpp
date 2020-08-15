#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>

#define MAXSTATE 10000000
#define HASHSIZE 1000003

using namespace std;

const int row[] = {-1, 1, 0, 0};
const int col[] = {0, 0, -1, 1};
struct origin
{
    int heap;
    int step;
};
origin a1[MAXSTATE];
origin a2[MAXSTATE];

int goal[3][3] = {{1, 2, 3}, {8, 0, 4}, {7, 6, 5}};
int initial[3][3] = {0};
void chuli(int aa[3][3], int topic)
{
    int num = 1;
    for (int i = 2; i >= 0; i--)
    {
        for (int j = 2; j >= 0; j--)
        {
            int temp = topic / num % 10;
            aa[i][j] = temp;
            num *= 10;
        }
    }
}

int main()
{
    int data;
    printf("goal node >> 123804765 \n");
    printf("pls enter initial node >>");
    cin >> data;

    chuli(initial, data);

    system("pause");
    return 0;
}
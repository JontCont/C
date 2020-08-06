#include <iostream>
#include <cstdio>
#include <cstring>
#include <map>
using namespace std;
#define maxsize 10000000
#define hashsize 1000003
#define N 3
map<int, bool> myMap;
int changeId[9][4] = {{-1, -1, 3, 1}, {-1, 0, 4, 2}, {-1, 1, 5, -1}, {0, -1, 6, 4}, {1, 3, 7, 5}, {2, 4, 8, -1}, {3, -1, -1, 7}, {4, 6, -1, 8}, {5, 7, -1, -1}};
const int M = 400000; //9=362800???40Wì鹻
int des = 123804765;  //num?┮Τ逼lenボ逼熌?碞琌9des?ヘ??钡ノ俱?ボ獽ゑ?
int que[M][3];
FILE *fp1;

void swap(char *c, int a, int b)
{
    char t = c[a];
    c[a] = c[b];
    c[b] = t;
}

int bfs(int n, int p)
{
    int head = 0, tail = 1, temp;
    myMap[n] = 1;
    que[head][0] = n, que[head][1] = p, que[head][2] = head;
    while (head != tail)
    {
        char cur[10];
        int pos = que[head][1];
        sprintf(cur, "%09d", que[head][0]);
        for (int i = 0; i < 4; i++)
        {
            int swapTo = changeId[pos][i];
            if (swapTo != -1)
            {
                swap(cur, pos, swapTo);
                sscanf(cur, "%d", &temp);
                if (temp == des)
                    return que[head][2] + 1;
                if (myMap.count(temp) == 0)
                {
                    que[tail][0] = temp, que[tail][1] = swapTo, que[tail][2] = que[head][2] + 1;
                    tail++;
                    myMap[temp] = 1;
                }
                swap(cur, pos, swapTo);
            }
        }
        head++;
    }
}
void show(int a[N][N][maxsize], int n)
{
    cout << "-------------------------------\n";
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << a[i][j][n] << " ";
        }
        cout << endl;
    }
    cout << "-------------------------------\n";
}

int main()
{
    fp1 = fopen("data.txt", "w"); //out.txt write
    char start[10];
    int n, i = -1, count = 0;
    printf("块﹍ >>");
    scanf("%s", start);
    while (start[++i] != '0')
        ;
    sscanf(start, "%d", &n);
    if (n != des)
        count = bfs(n, i);

    printf("程ㄎ˙计 : %d ˙", count);

    fprintf(fp1, "程ㄎ˙计 : %d ˙", count);
    fclose(fp1);
    //system("pause");
    return 0;
}

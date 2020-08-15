#include <iostream>
#include <cstdio>
#include <queue>
#include <cstring>
#include <vector>
#include <map>
#include <algorithm>
int s = 0;
struct me
{
    int c[4][4];
    int cur;
    int x, y;
} me;
int v[4][4] = {{0, 0, 0, 0}, {0, 1, 2, 3}, {0, 8, 0, 4}, {0, 7, 6, 5}};
int t[4][4];
using namespace std;
bool panduan(struct me a)
{
    for (int i = 1; i <= 3; i++)
        for (int j = 1; j <= 3; j++)
            if (a.c[i][j] != v[i][j])
                return false;
    return true;
}
void bfs()
{
    if (panduan(me))
        return;
    queue<struct me> my;
    map<long long, int> mx;
    my.push(me);
    while (!my.empty())
    {
        struct me x = my.front();
        my.pop();
        int ss = 0;
        for (int i = 1; i <= 3; i++)
            for (int j = 1; j <= 3; j++)
                ss = ss * 10 + x.c[i][j];
        if (mx.count(ss))
            continue;
        if (panduan(x))
        {
            me.cur = x.cur;
            return;
        }
        mx[ss] = 1;
        for (int i = 1; i <= 3; i++)
            for (int j = 1; j <= 3; j++)
                if (x.c[i][j] == 0)
                {
                    x.x = i;
                    x.y = j;
                    break;
                }
        //printf("%d\n",x.cur);
        //接下來是4個方向，我人傻，大神請勿噴
        if (x.x + 1 <= 3)
        {
            struct me y;
            y = x;
            swap(y.c[y.x][y.y], y.c[y.x + 1][y.y]);
            y.cur++;
            my.push(y);
        }
        if (x.x - 1 >= 1)
        {
            struct me y;
            y = x;
            swap(y.c[y.x][y.y], y.c[y.x - 1][y.y]);
            y.cur++;
            my.push(y);
        }
        if (x.y + 1 <= 3)
        {
            struct me y;
            y = x;
            swap(y.c[y.x][y.y], y.c[y.x][y.y + 1]);
            y.cur++;
            my.push(y);
        }
        if (x.y - 1 >= 1)
        {
            struct me y;
            y = x;
            swap(y.c[y.x][y.y], y.c[y.x][y.y - 1]);
            y.cur++;
            my.push(y);
        }
    }
}
int main()
{
    char a[11];
    scanf("%s", a);
    for (int i = 1; i <= 3; i++)
        for (int j = 1; j <= 3; j++)
        {
            me.c[i][j] = a[s++] - '0';
        }
    me.cur = 0;
    s = 0;
    bfs();
    printf("%d\n", me.cur);
    return 0;
}
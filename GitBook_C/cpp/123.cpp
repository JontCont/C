
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#define maxState 10000
#define N 3
using namespace std;

bool isEqual(int a[N][N][maxState], int b[N][N], int n)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (a[i][j][n] != b[i][j])
                return false;
        }
    }
    return true;
}

bool isEqual(int a[N][N], int b[N][N]) //檢查兩矩陣是否完全一致
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (a[i][j] != b[i][j])
                return false;
        }
    }
    return true;
}

int evalute(int state[N][N], int target[N][N]) //估價函數h-計算不在位的將牌個數
{
    int num = 0; //num表示當前矩陣state中不在目標位置上的將牌個數
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            if (state[i][j] != target[i][j])
                num++; //統計num
    }
    return num; //返回估價
}

void findBrack(int a[N][N], int x, int y)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (a[i][j] == 0)
            {
                x = i;
                y = j;
                return;
            }
        }
    }
}

bool move(int a[N][N], int b[N][N], int dir)
{
    //1 up 2 down 3 left 4 right
    int x = 0, y = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            b[i][j] = a[i][j]; //將原矩陣複製以進行移動操作
            if (a[i][j] == 0)
            {
                x = i;
                y = j; //標記空格位置
            }
        }
    }
    if (x == 0 && dir == 1)
        return false; //四條if語句排除四種不可能的移動方向
    if (x == N - 1 && dir == 2)
        return false; //返回false意指此種移動方式不可行，回到調用函數重新選擇移動方向
    if (y == 0 && dir == 3)
        return false;
    if (y == N - 1 && dir == 4)
        return false;
    if (dir == 1) //按照傳入的dir將空格往相應的方向移動
    {
        b[x - 1][y] = 0;
        b[x][y] = a[x - 1][y];
    }
    else if (dir == 2)
    {
        b[x + 1][y] = 0;
        b[x][y] = a[x + 1][y];
    }
    else if (dir == 3)
    {
        b[x][y - 1] = 0;
        b[x][y] = a[x][y - 1];
    }
    else if (dir == 4)
    {
        b[x][y + 1] = 0;
        b[x][y] = a[x][y + 1];
    }
    else
        return false;
    return true; //移動空格成功返回true
}

void statecpy(int a[N][N][maxState], int b[N][N], int n)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            a[i][j][n] = b[i][j]; //將移動完的新矩陣複製到close表中，n可以表示第n步搜索結果
        }
    }
}

void getState(int a[N][N][maxState], int b[N][N], int n)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            b[i][j] = a[i][j][n];
        }
    }
}

void statecpy(int a[N][N], int b[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            a[i][j] = b[i][j]; //複製當前矩陣start
    }
}
int checkAdd(int a[N][N][maxState], int b[N][N], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (isEqual(a, b, i))
            return i; //若兩矩陣相同則返回對應矩陣的編號
    }
    return -1;
}

int Astar(int a[N][N][maxState], int start[N][N], int target[N][N], int path[maxState])
{
    bool visited[maxState] = {false}; //true表示矩陣已被遍歷
    int fitness[maxState] = {0};
    int passLen[maxState] = {0};
    int curpos[N][N];
    statecpy(curpos, start);
    int id = 0, Curid = 0;
    fitness[id] = evalute(curpos, target);
    statecpy(a, start, id++);
    while (!isEqual(curpos, target)) //只要當前矩陣序列curpos與目標矩陣target不相同即執行while循環
    {
        for (int i = 1; i < 5; i++) //向四周找方向
        {
            int tmp[N][N] = {0};
            if (move(curpos, tmp, i)) //依次按照上下左右順序嘗試移動空格
            {
                int state = checkAdd(a, tmp, id);
                if (state == -1) //不添加到close表中
                {
                    path[id] = Curid; //走到當前第id個節點實際已經走過的路徑的花費
                    passLen[id] = passLen[Curid] + 1;
                    fitness[id] = evalute(tmp, target) + passLen[id]; //總花費估價
                    statecpy(a, tmp, id++);                           //將處理得到的新矩陣編號為id複製到open表中a中保存
                }
                else //添加到close表中
                {
                    int len = passLen[Curid] + 1, fit = evalute(tmp, target) + len; //修改估價函數
                    if (fit < fitness[state])
                    {
                        path[state] = Curid;
                        passLen[state] = len;
                        fitness[state] = fit;
                        visited[state] = false;
                    } //若所得結果小於預期花費則修改多餘部分的估價值，並將未遍歷過的矩陣標記為false
                }
            }
        }
        visited[Curid] = true; //第curid個矩陣已被遍歷過

        int minCur = -1;
        for (int i = 0; i < id; i++) //從open表中(visited值為false)尋找總估價函數fitness值最小的矩陣作為下一個帶搜索節點
            if (!visited[i] && (minCur == -1 || fitness[i] < fitness[minCur]))
                minCur = i;
        Curid = minCur;             //Curid現在表示被選作下一個擴展節點的矩陣的編號
        getState(a, curpos, Curid); //將被選中的矩陣複製給curpos
        if (id == maxState)
            return -1; //如果已經搜索節點數達到設定的maxState，則認為目標矩陣不可達，返回-1
    }
    return Curid; //已求得目標矩陣，返回最終矩陣的編號
}

int BFS(int a[N][N][maxState], int start[N][N], int target[N][N], int path[maxState])
{
    bool visited[maxState] = {false}; //true表示矩陣已被遍歷
    int fitness[maxState] = {0};
    int passLen[maxState] = {0};
    int curpos[N][N];
    statecpy(curpos, start);
    int id = 0, Curid = 0;
    //fitness[id] = evalute(curpos, target);
    statecpy(a, start, id++);
    while (!isEqual(curpos, target)) //只要當前矩陣序列curpos與目標矩陣target不相同即執行while循環
    {
        for (int i = 1; i < 5; i++) //向四周找方向
        {
            int tmp[N][N] = {0};
            if (move(curpos, tmp, i)) //依次按照上下左右順序嘗試移動空格
            {
                int state = checkAdd(a, tmp, id);
                if (state == -1) //不添加到close表中
                {
                    path[id] = Curid; //走到當前第id個節點實際已經走過的路徑的花費
                    passLen[id] = passLen[Curid] + 1;
                    fitness[id] = passLen[id]; //總花費估價
                    statecpy(a, tmp, id++);    //將處理得到的新矩陣編號為id複製到open表中a中保存
                }
                else //添加到close表中
                {
                    int len = passLen[Curid] + 1, fit = len; //修改估價函數
                    if (fit < fitness[state])
                    {
                        path[state] = Curid;
                        passLen[state] = len;
                        fitness[state] = fit;
                        visited[state] = false;
                    } //若所得結果小於預期花費則修改多餘部分的估價值，並將未遍歷過的矩陣標記為false
                }
            }
        }
        visited[Curid] = true; //第curid個矩陣已被遍歷過
        int minCur = -1;
        for (int i = 0; i < id; i++) //從open表中(visited值為false)尋找總估價函數fitness值最小的矩陣作為下一個帶搜索節點
            if (!visited[i] && (minCur == -1 || fitness[i] < fitness[minCur]))
                minCur = i;
        Curid = minCur;             //Curid現在表示被選作下一個擴展節點的矩陣的編號
        getState(a, curpos, Curid); //將被選中的矩陣複製給curpos
        if (id == maxState)
            return -1; //如果已經搜索節點數達到設定的maxState，則認為目標矩陣不可達，返回-1
    }
    return Curid; //已求得目標矩陣，返回最終矩陣的編號
}

void show(int a[N][N][maxState], int n)
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

int calDe(int a[N][N])
{
    int sum = 0;
    for (int i = 0; i < N * N; i++)
    {
        for (int j = i + 1; j < N * N; j++)
        {
            int m, n, c, d;
            m = i / N;
            n = i % N;
            c = j / N;
            d = j % N;
            if (a[c][d] == 0)
                continue;
            if (a[m][n] > a[c][d])
                sum++;
        }
    }
    return sum;
}

void autoGenerate(int a[N][N])
{
    int maxMove = 50;            //設置步數上限
    srand((unsigned)time(NULL)); //生成隨機數種子
    int tmp[N][N];
    while (maxMove--)
    {                             //隨機移動空格五十步可以保證初始狀態的矩陣序列不相同
        int dir = rand() % 4 + 1; //dir取值範圍1~4，代表空格移動的四個方向
        if (move(a, tmp, dir))
            statecpy(a, tmp); //打亂原目標矩陣的順序以構造初始矩陣
    }
}

void results_op(int res, int path[maxState], int a[N][N][maxState])
{

    int shortest[maxState] = {0}, j = 0;
    while (res != 0)
    {
        shortest[j++] = res;
        res = path[res];
    }
    cout << "第 0 步" << endl;
    show(a, 0);
    for (int i = j - 1; i >= 0; i--)
    {
        cout << "第 " << j - i << " 步\n";
        show(a, shortest[i]);
    }
}

int main()
{
    int a[N][N][maxState] = {0}; //存儲每個節點矩陣，最多可存儲maxState個
    //int start[N][N] = {1, 2, 3, 8, 0, 4, 7, 6, 5};  //指明八個數碼元素的值及目標狀態（將空格值認為0，則實際上是九個數碼）
    //autoGenerate(start);                            //調用此函數隨機打亂原矩陣順序生成不確定的矩陣序列
    int target[N][N] = {1, 2, 3, 8, 0, 4, 7, 6, 5}; //目標矩陣序列
    int start[N][N] = {1, 6, 3, 0, 8, 2, 4, 5, 7};
    int start_demo[N][N] = {0}, target_demo[N][N] = {0};
    statecpy(start_demo, start);
    statecpy(target_demo, target);

    //if (!(calDe(start) % 2 == calDe(target) % 2))
    //{
    //   cout << "在此初始狀態及目標序列情況下，無解\n";

    //  system("pause");
    //  return 0;
    // }

    int path[maxState] = {0};

    cout << "使用以不在目標位置的將牌個數的A*算法處理如下：" << endl;
    int res = Astar(a, start, target, path);
    // if (res == -1)
    //  { //認為目標矩陣不可達
    //  cout << "此次搜索已經搜索超過" << maxState << "個節點，認為目標矩陣不可達\n";

    // system("pause");
    //  return 0;
    //}
    results_op(res, path, a);

    //下面進行BFS搜索，因為需要藉用path數組，所以將其初始化為全零數組
    //for (int i = 0; i < maxState; i++)
    // {
    // path[0] = 0;
    //}
    //cout << "\n僅使用路徑花費作為啟發函數的A*算法(BFS)處理結果如下：" << endl;
    //res = BFS(a, start_demo, target_demo, path);
    /*if (res == -1)
    { //認為目標矩陣不可達
        cout << "此次搜索已經搜索超過" << maxState << "個節點，認為目標矩陣不可達\n";

        system("pause");
        exit(0);
    }
  */
    //results_op(res, path, a);

    cout << endl;
    system("pause");
    return 0;
}
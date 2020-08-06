#include <iostream>
#include <cstring>
#include <stack>
#include <queue>

#define MAXSTATE 10000000
#define HASHSIZE 1000003

using namespace std;

typedef int State[9];

static State st[MAXSTATE], goal;
static int dist[MAXSTATE], p[MAXSTATE];
static queue<int> states;

static const int dx[] = {-1, 1, 0, 0};
static const int dy[] = {0, 0, -1, 1};

static int head[HASHSIZE], next_pos[MAXSTATE];

static void init_lookup_table()
{
    memset(head, 0, sizeof(head));
}

static int hash_state(State &s)
{
    int v = 0;

    for (int i = 0; i < 9; ++i)
    {
        v = v * 10 + s[i];
    }

    return v % HASHSIZE;
}

static int try_to_insert(int s)
{
    int h = hash_state(st[s]);
    int u = head[h];
    while (u)
    {
        if (memcmp(st[u], st[s], sizeof(st[s])) == 0)
        {
            return 0;
        }
        u = next_pos[u];
    }
    next_pos[s] = head[h];
    head[h] = s;

    return 1;
}

static int bfs()
{
    init_lookup_table();

    int cnt = 1;
    states.push(cnt);
    while (!states.empty())
    {
        int index = states.front();
        states.pop();
        State &s = st[index];

        if (memcmp(s, goal, sizeof(s)) == 0)
        {
            return index;
        }

        int z;
        for (z = 0; z < 9; ++z)
        {
            if (s[z] == 0)
            {
                break;
            }
        }

        int x = z / 3, y = z % 3;
        for (int d = 0; d < 4; ++d)
        {
            int newX = x + dx[d];
            int newY = y + dy[d];
            if (newX >= 0 && newX < 3 && newY >= 0 && newY < 3)
            {
                int newZ = newX * 3 + newY;

                State &t = st[cnt + 1];
                memcpy(&t, &s, sizeof(s));
                t[newZ] = s[z];
                t[z] = s[newZ];

                if (try_to_insert(cnt + 1) == 1)
                {
                    ++cnt;
                    states.push(cnt);
                    p[cnt] = index;
                    dist[cnt] = dist[index] + 1;
                }
            }
        }
    }

    return 0;
}

static void print_board(State &s)
{
    for (int i = 0; i < 9; ++i)
    {
        if (i % 3 == 0 && i > 0)
        {
            cout << endl;
        }
        cout << s[i] << " ";
    }
    cout << endl;
}

static void print_paths(int start, int end)
{
    int count = 1;
    stack<int> stack;

    while (start != end)
    {
        stack.push(end);
        end = p[end];
    }
    while (!stack.empty())
    {
        int i = stack.top();
        stack.pop();
        cout << "Step " << count++ << " : " << endl;
        print_board(st[i]);
    }
}

int main()
{
    for (int i = 0; i < 9; ++i)
    {
        scanf("%d", &st[1][i]);
    }
    for (int i = 0; i < 9; ++i)
    {
        scanf("%d", &goal[i]);
    }
    cout << "\nStart: " << endl;
    print_board(st[1]);
    cout << "\nGoal:" << endl;
    print_board(goal);
    cout << endl;

    int ans = bfs();
    if (ans > 0)
    {
        printf("Total paths: %d\n\n", dist[ans]);
        print_paths(1, ans);
    }
    else
    {
        cout << "No Solution!" << endl;
    }

    return 0;
}
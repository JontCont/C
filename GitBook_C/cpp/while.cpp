#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main(int argc, char const *argv[])
{
    int state = 50;
    int get_num = 0;

    cout << "桌上有50顆球 請輸入拿取數量，";
    cout << "範圍1-3\n";
    while (state >= 0)
    {
        cin >> get_num;
        if (get_num > 3 || get_num < 0)
        {
            cout << "請再輸入一次 範圍1-3\n";
        }
        else
        {
            state -= get_num;
        }
        cout << "剩下 " << state << "\n";
    }

    return 0;
}

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int score;
    cout << "輸入成績";
    cin >> score;

    if (score < 60)
    {
        cout << "及格";
    }
    else
    {
        cout << "不及格";
    }

    system("PAUSE");
    return 0;
}
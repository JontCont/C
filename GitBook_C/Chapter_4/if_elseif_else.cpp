#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int score;
    cout << "輸入成績";
    cin >> score;

    if (score >= 90)
    {
        cout << "level : A";
    }
    else if (score >= 80)
    {
        cout << "level : B";
    }
    else if (score >= 70)
    {
        cout << "level : C";
    }
    else if (score >= 60)
    {
        cout << "level : D";
    }
    else
    {
        cout << "level : F";
    }
    cout << "\n";
    system("PAUSE");
    return 0;
}
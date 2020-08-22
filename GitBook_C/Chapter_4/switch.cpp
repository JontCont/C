#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int score;
    cout << "輸入成績";
    cin >> score;

    switch (score / 10) //option
    {
    case 9:
    case 10:
        cout << "level : A";
        break;
    case 8:
        cout << "level : B";
        break;
    case 7:
        cout << "level : C";
        break;
    case 6:
        cout << "level : D";
        break;
    default:
        cout << "level : F";
        break;
    }

    cout << "\n";
    system("PAUSE");
    return 0;
}
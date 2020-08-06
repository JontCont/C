#include <cstdlib>
#include <cstdio>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    char num = 65;
    // cout << (num) << endl;
    for (int x = 0; x < 5; x++)
    {
        for (int y = 0; y < x + 1; y++)
        {
            cout << (num);
        }
        num += 1;
        cout << "\n";
    }
    system("pause");
    return 0;
}

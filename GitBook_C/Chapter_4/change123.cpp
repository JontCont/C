#include <cstdlib>
#include <cstdio>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int spilt_sum;
    int num, spilt;
    cout << "任意輸入一數字\n";
    cin >> num;
    while (num % 10 != 0)
    {
        spilt = num % 10;
        cout << spilt;
        num /= 10;
    }
    cout << '\n';
    system("pause");
    return 0;
}

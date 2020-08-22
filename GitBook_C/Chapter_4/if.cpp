#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    float consum = 400;  //消費
    float discont = 0.9; //vip 9折
    int vip_option = 0;  // 選項
    int count = 0;
    cout << "持VIP(1 有VIP , 2 無) :";
    cin >> vip_option;

    cout << "消費人數 :";
    cin >> count;
    consum = consum * count;
    if (vip_option == 1)
    {
        consum = (consum * discont);
    }
    cout << "消費金額 : " << consum;
    system("PAUSE");
    return 0;
}
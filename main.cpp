#include <iostream>
#include <windows.h>
using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    int profit = 0;
    for (int i = 1; i <= 6; i++) {
        int monthly_profit;
        cout << "������ �������� �� " << i << "-� �����: ";
        cin >> monthly_profit;
        profit += monthly_profit;
    }

    cout << "��������� �������� �� 6 ������: " << profit << endl;

    return 0;
}
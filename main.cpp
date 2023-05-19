#include <iostream>
#include <limits>
#include <windows.h>
using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int NUM_MONTHS = 12;
    double profits[NUM_MONTHS];

    cout << "������ �������� �� ����� ����� ����:" << endl;
    for (int i = 0; i < NUM_MONTHS; i++) {
        cout << "�������� �� ����� " << i + 1 << ": ";
        cin >> profits[i];
    }

    int startMonth, endMonth;
    cout << "������ ���������� ����� (1-12): ";
    cin >> startMonth;
    cout << "������ ������� ����� (1-12): ";
    cin >> endMonth;

    if (startMonth < 1 || startMonth > NUM_MONTHS || endMonth < 1 || endMonth > NUM_MONTHS || startMonth > endMonth) {
        cout << "����������� ������� ������!" << endl;
        return 0;
    }

    double maxProfit = profits[startMonth - 1];
    int maxMonth = startMonth - 1;
    for (int i = startMonth; i <= endMonth; i++) {
        if (profits[i - 1] > maxProfit) {
            maxProfit = profits[i - 1];
            maxMonth = i - 1;
        }
    }

    double minProfit = profits[startMonth - 1];
    int minMonth = startMonth - 1;
    for (int i = startMonth; i <= endMonth; i++) {
        if (profits[i - 1] < minProfit) {
            minProfit = profits[i - 1];
            minMonth = i - 1;
        }
    }

    cout << "̳���� � ������������ ���������: " << maxMonth + 1 << endl;
    cout << "̳���� � ��������� ���������: " << minMonth + 1 << endl;

    return 0;
}

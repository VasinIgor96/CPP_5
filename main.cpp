#include <iostream>
#include <limits>
#include <windows.h>
using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    const int NUM_MONTHS = 12;
    double profits[NUM_MONTHS];

    cout << "¬вед≥ть прибутки за кожен м≥с€ць року:" << endl;
    for (int i = 0; i < NUM_MONTHS; i++) {
        cout << "ѕрибуток за м≥с€ць " << i + 1 << ": ";
        cin >> profits[i];
    }

    double maxProfit = profits[0];
    int maxMonth = 0;
    for (int i = 1; i < NUM_MONTHS; i++) {
        if (profits[i] > maxProfit) {
            maxProfit = profits[i];
            maxMonth = i;
        }
    }

    double minProfit = profits[0];
    int minMonth = 0;
    for (int i = 1; i < NUM_MONTHS; i++) {
        if (profits[i] < minProfit) {
            minProfit = profits[i];
            minMonth = i;
        }
    }

    cout << "ћ≥с€ць з максимальним прибутком: " << maxMonth + 1 << endl;
    cout << "ћ≥с€ць з м≥н≥мальним прибутком: " << minMonth + 1 << endl;

    return 0;
}

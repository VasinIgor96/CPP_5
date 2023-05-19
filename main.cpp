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

    int startMonth, endMonth;
    cout << "¬вед≥ть початковий м≥с€ць (1-12): ";
    cin >> startMonth;
    cout << "¬вед≥ть к≥нцевий м≥с€ць (1-12): ";
    cin >> endMonth;

    if (startMonth < 1 || startMonth > NUM_MONTHS || endMonth < 1 || endMonth > NUM_MONTHS || startMonth > endMonth) {
        cout << "Ќекоректний д≥апазон м≥с€ц≥в!" << endl;
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

    cout << "ћ≥с€ць з максимальним прибутком: " << maxMonth + 1 << endl;
    cout << "ћ≥с€ць з м≥н≥мальним прибутком: " << minMonth + 1 << endl;

    return 0;
}

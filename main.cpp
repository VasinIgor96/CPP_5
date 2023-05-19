#include <iostream>
#include <windows.h>
using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    int profit = 0;
    for (int i = 1; i <= 6; i++) {
        int monthly_profit;
        cout << "¬вед≥ть прибуток за " << i << "-й м≥с€ць: ";
        cin >> monthly_profit;
        profit += monthly_profit;
    }

    cout << "«агальний прибуток за 6 м≥с€ц≥в: " << profit << endl;

    return 0;
}
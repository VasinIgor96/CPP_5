#include <iostream>
#include <windows.h>
using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
        const int NUM_SIDES = 5;
        double sides[NUM_SIDES];

        cout << "Введіть довжини сторін п'ятикутника:" << endl;
        for (int i = 0; i < NUM_SIDES; i++) {
            cout << "Сторона " << i + 1 << ": ";
            cin >> sides[i];
        }

        double perimeter = 0;
        for (int i = 0; i < NUM_SIDES; i++) {
            perimeter += sides[i];
        }

        cout << "Периметр п'ятикутника: " << perimeter << endl;

        return 0;
    }

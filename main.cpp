#include <iostream>
#include <windows.h>
using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

        const int SIZE = 5;
        int arr[SIZE];

        cout << "������ �������� ������:" << endl;
        for (int i = 0; i < SIZE; i++) {
            cout << "������� " << i + 1 << ": ";
            cin >> arr[i];
        }

        cout << "����� � ����������� �������:" << endl;
        for (int i = SIZE - 1; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;

        return 0;
    }

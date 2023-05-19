
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    srand(GetTickCount());
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int count = 10;
    const int SIZE = 1000;
    int arr_def[SIZE];
    for (int i = 0; i < count; i++)
    {
        arr_def[i] = 20 + rand() % 30;
        cout << "Елемент " << i + 1 << ": " << arr_def[i] << endl;
    }

    int min = arr_def[0];
    int max = arr_def[0];

    for (int i = 1; i < count; i++)
    {
        if (min > arr_def[i])
        {
            min = arr_def[i];
        }
        if (max < arr_def[i])
        {
            max = arr_def[i];
        }
    }

    cout << "Мінімальне значення: " << min << endl;
    cout << "Максимальне значення: " << max << endl;

    return 0;
}

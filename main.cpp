#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int N = 10;
    double arr[N];

    cout << "Введіть елементи масиву:" << endl;
    for (int i = 0; i < N; i++) {
        cout << "Елемент " << i + 1 << ": ";
        cin >> arr[i];
    }

    double sumNegative = 0.0;
    double productBetween = 1.0;
    double productEven = 1.0;
    double sumBetweenNegatives = 0.0;
    int firstNegativeIndex = -1;
    int lastNegativeIndex = -1;

    for (int i = 0; i < N; i++) {
        if (arr[i] < 0) {
            if (firstNegativeIndex == -1) {
                firstNegativeIndex = i;
            }
            lastNegativeIndex = i;
            sumNegative += arr[i];
        }

        if (firstNegativeIndex != -1 && lastNegativeIndex != -1 && i > firstNegativeIndex && i < lastNegativeIndex) {
            productBetween *= arr[i];
        }

        if (i % 2 == 0) {
            productEven *= arr[i];
        }
    }

    if (firstNegativeIndex != -1 && lastNegativeIndex != -1 && lastNegativeIndex - firstNegativeIndex > 1) {
        for (int i = firstNegativeIndex + 1; i < lastNegativeIndex; i++) {
            sumBetweenNegatives += arr[i];
        }
    }

    cout << "Сума від'ємних елементів: " << sumNegative << endl;
    cout << "Добуток елементів, що розташовані між першим і останнім від'ємними елементами: " << productBetween << endl;
    cout << "Добуток елементів з парними номерами: " << productEven << endl;
    cout << "Сума елементів, що розташовані між першим і останнім від'ємними елементами: " << sumBetweenNegatives << endl;

    return 0;
}

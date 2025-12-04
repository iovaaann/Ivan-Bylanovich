#include <iostream>
#include <iomanip>
#include <string>
#include <windows.h>

using namespace std;

void lab_3() {

    // Варіант 2

    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    const int N = 200;
    int arr[N];

    srand(time(0));

    cout << "Масив (" << N << " елементів):\n";
    for (int i = 0; i < N; i++)
    {
        arr[i] = rand() % 101 - 50;  // від -50 до 50 включно
        cout << setw(4) << arr[i];
        if ((i + 1) % 20 == 0) cout << "\n";
    }
    cout << "\n\n";

    int pair_count = 0;

    for (int i = 0; i < N - 1; i++)
    {
        if (arr[i] == arr[i + 1]) // порівнюємо і-елемент з наступним (сусіднім)
        {
            pair_count++;
        }
    }

    cout << "Кількість пар сусідніх елементів з однаковими значеннями: ";
    cout << pair_count << endl;

    cout << "\n";

    system("pause");
}
#include <iostream>
#include <iomanip>
#include <string>
#include <windows.h>

using namespace std;

void lab_4() {

    // Варіант 2

    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    const int N = 9; // розмірність матриці 9Х9, можна також зробити динамічною через cin
    int matrix[N][N];

    srand(time(0));

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (j >= i)
                matrix[i][j] = rand() % 90 + 10;
            else
                matrix[i][j] = 0;  // обнулюємо частину матриці під головною діагоналлю
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < i; j++)
        {
            matrix[i][j] = matrix[j][i]; // відзеркалюємо
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << setw(6) << matrix[i][j];
        }
        cout << "\n";
    }

    cout << "\n\n";

    system("pause");
}
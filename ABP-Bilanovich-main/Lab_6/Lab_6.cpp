#include <iostream>
#include <iomanip>
#include <string>
#include <windows.h>

using namespace std;

void lab_6() {

    // Варіант 2

    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int n;
    cout << "Введіть розмір матриці: ";
    cin >> n;

    if (n <= 0 || n > 20) {
        cout << "Неправильний розмір!\n";
        system("pause");
        return;
    }

    int** A = new int*[n]; // динамічна матриця
    for (int i = 0; i < n; i++)
        A[i] = new int[n];

    srand(time(0));

    cout << "\nПочаткова матриця:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            A[i][j] = rand() % 199 - 99;
            cout << setw(5) << A[i][j];
        }
        cout << "\n";
    }

    int** B = new int*[n];
    for (int i = 0; i < n; i++)
        B[i] = new int[n];

    // транспонована матриця на 90 вліво
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            B[n-1-j][i] = A[i][j];
        }
    }

    cout << "\nОбернена на 90° проти годинникової стрілки:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << setw(5) << B[i][j];
        }
        cout << "\n";
    }

    // чистимо пам'ять видаляючи масиви та їх елементи
    for (int i = 0; i < n; i++) {
        delete[] A[i];
        delete[] B[i];
    }
    delete[] A;
    delete[] B;

    cout << "\n";

    system("pause");
}
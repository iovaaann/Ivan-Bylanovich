#include <iostream>
#include <iomanip>
#include <string>
#include <windows.h>

using namespace std;

void lab_2_1() {
    // Варіант 2

    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    double x, y;
    cout << "Введіть координати точки (x y): ";
    cin >> x >> y;

    cout << fixed << setprecision(3);
    cout << "\nx = " << x << "; y = " << y << "\n\n";

    bool in_area = (x <= 0) && (x*x + y*y <= 1.0 + 1e-9); // 1e-9 - похибка - 1.000000001

    if (in_area) {
        cout << "Точка попадає в область\n\n";
    }
    else {
        cout << "Точка не попадає в область\n\n";
    }

    system("pause");
}
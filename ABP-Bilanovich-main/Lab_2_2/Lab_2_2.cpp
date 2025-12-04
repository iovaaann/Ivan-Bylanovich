#include <iostream>
#include <iomanip>
#include <string>
#include <windows.h>
#include <cmath>

using namespace std;

void lab_2_2() {

    // Варіант 2

    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    const double EPS = 0.000001;
    double sum = 0.0;
    double sum10 = 0.0;
    long n = 0;

    cout << fixed << setprecision(7); // К-ть знаків після .

    while (true)
    {
        double term = pow(-1.0, n) * (n + 1) / (n*n*n + 2); // aₙ = (-1)^n · (n + 1) / (n^3 + 2)

        sum += term;

        if (n < 10)
            sum10 += term;

        if (n == 9) {
            cout << "Сума перших 10 членів ряду = " << sum10 << endl;
        }

        if (fabs(term) <= EPS) {
            cout << "Повна сума ряду = " << sum << endl;
            break;
        }

        n++;
    }

    cout << "\n";

    system("pause");
}
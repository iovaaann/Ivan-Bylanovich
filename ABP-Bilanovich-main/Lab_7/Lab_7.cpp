#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;

struct Company //структура
{
    string name;
    int products;
    long long revenue;
    double market_share;
};

void print_table(const Company firms[], int n)
{
    cout << "\n";
    cout << "---------------------------------------------------------\n";
    cout << "|               Фірми - виробники СУБД                  |\n";
    cout << "|-------------------------------------------------------|\n";
    cout << "| Фірма       | Кількість | Річний обсяг | Частка ринку |\n";
    cout << "|             | товарів   | продажу ($)  |     (%)      |\n";
    cout << "|-------------|-----------|--------------|--------------|\n";

    for (int i = 0; i < n; i++)
    {
        cout << "| " << left << setw(11) << firms[i].name
             << " | " << setw(9)  << firms[i].products
             << " | " << setw(12) << firms[i].revenue
             << " | " << fixed << setprecision(1) << setw(10) << firms[i].market_share << "   |\n";
    }

    cout << "|-------------------------------------------------------|\n";
    cout << "| Примітка: за даними Gartner Group за 1999р.           |\n";
    cout << "---------------------------------------------------------\n";
}

void lab_7()
{
    // Варіант 2

    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    Company firms[3];

    for (int i = 0; i < 3; i++)
    {
        cout << i + 1 << ". Введіть: Фірма, Кількість, Річний_обсяг, Частка > ";
        cin >> firms[i].name >> firms[i].products >> firms[i].revenue >> firms[i].market_share;
    }

    print_table(firms, 3);

    system("pause");
}
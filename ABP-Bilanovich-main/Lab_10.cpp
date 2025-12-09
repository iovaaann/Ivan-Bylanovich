#include <iostream>
#include <iomanip>
#include <cstring>
#include <windows.h>
using namespace std;

const int MAX_NAME = 20;

class DBFirm
{
private:
    char name[MAX_NAME];
    int products;
    long long sales;
    double marketShare;

public:
    DBFirm()
    {
        name[0] = '\0';
        products = 0;
        sales = 0;
        marketShare = 0.0;
    }

    void set()
    {
        cout << "Введіть: Фірма, кількість продуктів, обсяг продажів, частка ринку > ";
        cin >> name >> products >> sales >> marketShare;
    }

    void get(char* n, int& p, long long& s, double& m) const
    {
        strcpy(n, name);
        p = products;
        s = sales;
        m = marketShare;
    }

    void show() const
    {
        cout << "| " << left << setw(19) << name
             << " | " << setw(9) << products
             << " | " << setw(16) << sales
             << " | " << fixed << setprecision(1) << marketShare << "     |\n";
    }

    const char* getName() const { return name; }
    int getProducts() const { return products; }
    long long getSales() const { return sales; }
    double getShare() const { return marketShare; }
};

void lab_10()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    DBFirm f1, f2, f3;

    cout << "Введення даних для трьох фiрм:\n";
    f1.set();
    f2.set();
    f3.set();

    cout << "\n-----------------------------------------------------------------\n";
    cout << "|            Фірми - виробники СКБД (Gartner Group, 1999р)      |\n";
    cout << "|---------------------------------------------------------------|\n";
    cout << "| Фірма               | Кількість | Обсяг продажів   | Частка   |\n";
    cout << "|                     | продуктів | (дол. США)       | ринку    |\n";
    cout << "|---------------------|-----------|------------------|----------|\n";

    f1.show();
    f2.show();
    f3.show();

    cout << "|---------------------------------------------------------------|\n";
    cout << "| Примітка: за даними Gartner Group за 1999 рік                 |\n";
    cout << "-----------------------------------------------------------------\n\n";

    cout << "Перевiрка роботи аксесора get() на першому об’єктi:\n";
    char n[MAX_NAME];
    int p;
    long long s;
    double m;
    f1.get(n, p, s, m);

    cout << "Данi: " << n << " | "
         << p << " продуктiв | "
         << s << " $ | "
         << m << " %\n\n";

    system("pause");
}

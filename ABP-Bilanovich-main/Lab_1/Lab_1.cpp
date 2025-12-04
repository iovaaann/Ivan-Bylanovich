#include <iostream>
#include <iomanip>
#include <string>
#include <windows.h>

using namespace std;

void lab_1() {

    // Варіант 2

    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    string firm1, firm2, firm3;
    int rank1, rank2, rank3;
    long long revenue1, revenue2, revenue3;
    double share1, share2, share3;

    cout << "1. Фірма Кількість товарів Річний обсяг продажу($) Частка ринку(%) > ";
    cin >> firm1 >> rank1 >> revenue1 >> share1;

    cout << "2. Фірма Кількість товарів Річний обсяг продажу($) Частка ринку(%) > ";
    cin >> firm2 >> rank2 >> revenue2 >> share2;

    cout << "3. Фірма Кількість товарів Річний обсяг продажу($) Частка ринку(%) > ";
    cin >> firm3 >> rank3 >> revenue3 >> share3;

    cout << "\n\n";
    cout << "---------------------------------------------------------\n";
    cout << "|                 Фірми - виробники СУБД                |\n";
    cout << "|-------------------------------------------------------|\n";
    cout << "| Фірма       | Кількість | Річний обсяг | Частка ринку |\n";
    cout << "|             | товарів   | продажу ($)  |     (%)      |\n";
    cout << "|-------------|-----------|--------------|--------------|\n";

    cout << "| " << left << setw(11) << firm1
         << " | " << setw(9) << rank1
         << " | " << setw(12) << revenue1
         << " | " << fixed << setprecision(1) << share1 << "         |\n";

    cout << "| " << left << setw(11) << firm2
         << " | " << setw(9) << rank2
         << " | " << setw(12) << revenue2
         << " | " << fixed << setprecision(1) << share2 << "         |\n";

    cout << "| " << left << setw(11) << firm3
         << " | " << setw(9) << rank3
         << " | " << setw(12) << revenue3
         << " | " << fixed << setprecision(1) << share3 << "         |\n";

    cout << "|-------------------------------------------------------|\n";
    cout << "| Примітка: за даними Gartner Group за 1999р.           |\n";
    cout << "---------------------------------------------------------\n\n";

    system("pause");
}
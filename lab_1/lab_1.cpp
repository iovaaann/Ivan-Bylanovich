//
// Created by IVAN on 27.11.2025.
//
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    char firm1[15], firm2[15], firm3[15];
    unsigned short goods1, goods2, goods3;
    unsigned long sales1, sales2, sales3;
    float market1, market2, market3;

    /* Введення фактичних даних */
    cout << "1. Введіть: фірму, кількість товарів, обсяг продажу, частку ринку > ";
    cin >> firm1 >> goods1 >> sales1 >> market1;

    cout << "2. Введіть: фірму, кількість товарів, обсяг продажу, частку ринку > ";
    cin >> firm2 >> goods2 >> sales2 >> market2;

    cout << "3. Введіть: фірму, кількість товарів, обсяг продажу, частку ринку > ";
    cin >> firm3 >> goods3 >> sales3 >> market3;

    /* Виведення таблиці */
    cout << "---------------------------------------------------------------\n";
    cout << "|              Фірми - виробники СУБД                         |\n";
    cout << "|-------------------------------------------------------------|\n";
    cout << "|   Фірма    |  К-сть товарів | Річний обсяг ($) | Ринок (%) |\n";
    cout << "|------------|----------------|------------------|------------|\n";

    cout << "| " << setw(10) << firm1 << " | "
         << setw(14) << goods1 << " | "
         << setw(16) << sales1 << " | "
         << setw(10) << fixed << setprecision(1) << market1 << " |\n";

    cout << "| " << setw(10) << firm2 << " | "
         << setw(14) << goods2 << " | "
         << setw(16) << sales2 << " | "
         << setw(10) << fixed << setprecision(1) << market2 << " |\n";

    cout << "| " << setw(10) << firm3 << " | "
         << setw(14) << goods3 << " | "
         << setw(16) << sales3 << " | "
         << setw(10) << fixed << setprecision(1) << market3 << " |\n";

    cout << "---------------------------------------------------------------\n";
    cout << "| Примітка: за даними Gartner Group за 1999 р.                |\n";
    cout << "---------------------------------------------------------------\n";

    return 0;
}




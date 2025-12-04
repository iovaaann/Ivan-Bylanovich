#include <iostream>
#include "windows.h"

#include "Lab_1/Lab_1.cpp"
#include "Lab_2_1/Lab_2_1.cpp"
#include "Lab_2_2/Lab_2_2.cpp"
#include "Lab_3/Lab_3.cpp"
#include "Lab_4/Lab_4.cpp"
#include "Lab_5/Lab_5.cpp"
#include "Lab_6/Lab_6.cpp"
#include "Lab_7/Lab_7.cpp"

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int nomerLaboratornoi;

    cout << "Введіть номер лабораторної роботи" << endl;
    cin >> nomerLaboratornoi;

    switch (nomerLaboratornoi) {
        case 1:
            lab_1();
            break;
        case 21:
            lab_2_1();
            break;
        case 22:
            lab_2_2();
            break;
        case 3:
            lab_3();
            break;
        case 4:
            lab_4();
            break;
        case 5:
            lab_5();
            break;
        case 6:
            lab_6();
            break;
        case 7:
            lab_7();
            break;
        default:
            cout << "Невірне значення або лабораторна відсутня" << endl;
    }

    return 0;
}

#include <iostream>
#include <iomanip>
#include <cstring>
#include <windows.h>
using namespace std;

struct CompanyList {
    char name[20];
    int products;
    long long sales;
    double marketShare;
    CompanyList* next;
};

CompanyList* head = nullptr;

void print_header()
{
    cout << "\n-----------------------------------------------------------------\n";
    cout << "|            Фірми - виробники СКБД (Gartner Group, 1999р)      |\n";
    cout << "|---------------------------------------------------------------|\n";
    cout << "| Фірма               | Кількість | Обсяг продажів   | Частка   |\n";
    cout << "|                     | продуктів | (дол. США)       | ринку    |\n";
    cout << "|---------------------|-----------|------------------|----------|\n";
}

void print_list()
{
    print_header();
    CompanyList* cur = head;
    while (cur != nullptr)
    {
        cout << "| " << left << setw(19) << cur->name
             << " | " << setw(9) << cur->products
             << " | " << setw(16) << cur->sales
             << " | " << fixed << setprecision(1) << cur->marketShare << "     |\n";
        cur = cur->next;
    }
    cout << "|---------------------------------------------------------------|\n";
    cout << "| Примітка: за даними Gartner Group за 1999 рік                 |\n";
    cout << "-----------------------------------------------------------------\n\n";
}

bool add_company()
{
    CompanyList* newNode = new CompanyList;

    cout << "Введіть: Фірма, кількість продуктів, обсяг продажів, частка ринку > ";
    cin >> newNode->name;

    if (strcmp(newNode->name, "***") == 0)
    {
        delete newNode;
        return false;
    }

    cin >> newNode->products >> newNode->sales >> newNode->marketShare;
    newNode->next = nullptr;

    if (!head)
    {
        head = newNode;
    }
    else
    {
        CompanyList* cur = head;
        while (cur->next != nullptr)
            cur = cur->next;
        cur->next = newNode;
    }
    return true;
}

void lab_8()
{
    // Варіант 2

    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    while (add_company()) {}

    if (!head)
    {
        cout << "\nНічого не введено.\n";
        system("pause");
        return;
    }

    cout << "\nПочатковий список:\n";
    print_list();

    const int MAX = 20;
    CompanyList temp[MAX];
    CompanyList* cur = head;
    int count = 0;

    while (cur != nullptr && count < MAX)
    {
        strcpy_s(temp[count].name, cur->name);
        temp[count].products = cur->products;
        temp[count].sales = cur->sales;
        temp[count].marketShare = cur->marketShare;
        cur = cur->next;
        count++;
    }

    for (int i = 0; i < count - 1; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (strcmp(temp[i].name, temp[j].name) > 0)
            {
                swap(temp[i], temp[j]);
            }
        }
    }

    cout << "Список після сортування за фірмою:\n";
    print_header();
    for (int i = 0; i < count; i++)
    {
        cout << "| " << left << setw(19) << temp[i].name
             << " | " << setw(9) << temp[i].products
             << " | " << setw(16) << temp[i].sales
             << " | " << fixed << setprecision(1) << temp[i].marketShare << "     |\n";
    }
    cout << "|---------------------------------------------------------------|\n";
    cout << "| Примітка: за даними Gartner Group за 1999 рік                 |\n";
    cout << "-----------------------------------------------------------------\n";

    while (head != nullptr)
    {
        CompanyList* temp = head;
        head = head->next;
        delete temp;
    }

    cout << "\n";
    system("pause");
}
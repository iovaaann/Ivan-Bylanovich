#include <iostream>
#include <iomanip>
#include <string>
#include <windows.h>

using namespace std;

void lab_5() {

    // Варіант 2

    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int N;
    cout << "Введіть розмір масиву: ";
    cin >> N;

    if (N <= 0 || N > 10000) {
        cout << "Значення занадто мале/велике\n";
        system("pause");
        return;
    }

    int* arr = new int[N];
    srand(time(0));

    cout << "\nПочатковий масив:\n";
    for (int i = 0; i < N; i++) {
        arr[i] = rand() % 201 - 100; // значення від -100 до 100
        cout << setw(6) << arr[i];
        if ((i + 1) % 15 == 0) cout << "\n";
    }
    cout << "\n\n";

    double sum_pos = 0, sum_neg = 0;
    int count_pos = 0, count_neg = 0;

    for (int i = 0; i < N; i++) {
        if (arr[i] > 0) {
            sum_pos += arr[i];
            count_pos++;
        }
        else if (arr[i] < 0) {
            sum_neg += arr[i];
            count_neg++;
        }
    }

    double avg_pos = (count_pos > 0) ? sum_pos / count_pos : 0;
    double avg_neg = (count_neg > 0) ? sum_neg / count_neg : 0;

    double threshold = max(avg_pos, -avg_neg); // -(avg_neg) - значення з +

    cout << "Середнє позитивних: " << fixed << setprecision(3) << avg_pos << endl;
    cout << "Середнє негативних: " << avg_neg << endl;
    cout << "Порогове значення: " << threshold << endl << endl;

    for (int i = 0; i < N; i++) { // обмежуємо
        if (abs(arr[i]) > threshold) {
            arr[i] = (arr[i] > 0) ? (int)threshold : -(int)threshold;
        }
    }

    cout << "Масив після обмеження:\n";
    for (int i = 0; i < N; i++) {
        cout << setw(6) << arr[i];
        if ((i + 1) % 15 == 0) cout << "\n";
    }
    cout << "\n\n";

    system("pause");
}
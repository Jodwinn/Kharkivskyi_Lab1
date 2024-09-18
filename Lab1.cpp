#include <iostream>
#include <Windows.h>
using namespace std;
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int mark;
    cout << "Введіть вашу оцінку: ";
    cin >> mark;
    if (mark >= 60) {
        cout << "Ви склали іспит";
    }
    else {
        cout << "Ви не склали іспит";

    }
}

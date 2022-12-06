#include <iostream>

using namespace std;

int main() {
    //Завдання 25
    int number;
    int a;
    int b;
    int c;

    cout << "Введіть трьохцифрове число : ";
    cin >> number;
    a = number / 100;
    b = number / 10 % 10;
    c = number % 10;

    cout << "Перше число" << a << endl;
    cout << "Друге число" << b << endl;
    cout << "Третє число" << c << endl;

    number = (c * 100) + (b * 10) + a;

    cout << number;


    return 0;
}
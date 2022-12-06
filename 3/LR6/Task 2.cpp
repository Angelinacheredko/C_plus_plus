//Завдання 25
#include <iostream>
#include <string>

using namespace std;

int main() {
    int number;

    cout << "Введіть номер дня тиждня(від 1 до 7) : ";
    cin >> number;

    switch (number) {
    case 1: cout << "Граф Монте-Крісто, Олександр Дюна"; break;
    case 2: cout << "Три мушкетери, Олександр Дюна"; break;
    case 3: cout << "Ромео і Джульєтта, Вільям Шекспір"; break;
    case 4: cout << "Маленький Принц, Антуан де Сент-Екзюпері"; break;
    case 5: cout << "451 градус за Фаренгейтом, Рей Бредбері"; break;
    case 6: cout << "Фауст, Йоганн Вольфганг фон Гете"; break;
    case 7: cout << "Божественна комедія, Данте Аліг'єрі"; break;
    default: cout << "Книга за номером " << number << " відсутня"; break;
    }

    return 0;
}
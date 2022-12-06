#include <iostream>

using namespace std;

int main() {
    //1 малюнок
    float x, y;

    cout << "Введіть кординати точки(x y) :";
    cin >> x >> y;

    if (x <= 3 && y <= 1 && x >= 0 && y >= 0)
        cout << "Точка потрапила в задану область";
    else
        cout << "Точка не потрапила в задану область";
}
#include <iostream>

using namespace std;

int main() {
    //1 �������
    float x, y;

    cout << "������ ��������� �����(x y) :";
    cin >> x >> y;

    if (x <= 3 && y <= 1 && x >= 0 && y >= 0)
        cout << "����� ��������� � ������ �������";
    else
        cout << "����� �� ��������� � ������ �������";
}
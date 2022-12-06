#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main()
{
	int a = 3;
	float b = 0.523;
	float y;

	y = pow(1.56 * sqrt(sin(b)) / 0.8942 * log(a), 1. / 4); //25 приклад
	cout << "y = " << y << "\n";
	return 0;
}
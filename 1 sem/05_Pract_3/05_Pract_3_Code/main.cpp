#include "stdafx.h"
#include "iostream"
#include <cmath>

using namespace std;

int main()
{
	double a = 3.1, b = 6.2, c = 1.03, d = 2.7, y;
	y = 2 * fabs(asin(-sqrt(c / d))) + cos(pow(a, b));
	cout << "Y = " << y << endl;
	system("pause");
	return 0;
}


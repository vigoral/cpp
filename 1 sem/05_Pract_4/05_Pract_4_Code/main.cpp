#include "stdafx.h"
#include "iostream"
#include <cmath>

using namespace std;

int main()
{
	double x, y, R;
	cout << "Input x = "; cin >> x;
	cout << "Input y = "; cin >> y;
	cout << "Input radius R: "; cin >> R;
	if (fabs(x) > R || fabs(y) > R)
		cout << "The point is outside the circle" << endl;
	else
	{
		cout << "The point is inside the circle ";
		if (y < -fabs(x))
			cout << "and under the curve." << endl;
		else
			cout << "and upper the curve." << endl;
	}
	system("pause");
	return 0;
}


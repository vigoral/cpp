#include "stdafx.h"
#include <iostream>

using namespace std;

int func(int, int, unsigned int);

int main()
{
	int n, p;
	unsigned int x;
	cout << "Input x = "; cin >> x;
	cout << "Input p = "; cin >> p;
	cout << "Input n = "; cin >> n;
	x = func(p, n, x);
	cout << "x = " << x << endl;
	system("pause");
    return 0;
}

int func(int p, int n, unsigned int x)
{
	return x | (((1 << n) - 1) << p);
}

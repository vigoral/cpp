#include "stdafx.h"
#include <iostream>

using namespace std;

int func(int, int, unsigned int);
void test(unsigned int);

int main()
{
	int n, p;
	unsigned int x;
	cout << "Input x = "; cin >> x;
	cout << "Input p = "; cin >> p;
	cout << "Input n = "; cin >> n;
	test(x);
	x = func(p, n, x);
	cout << "x = " << x << endl;
	test(x);
	system("pause");
	return 0;
}

int func(int p, int n, unsigned int x)
{
	return x | (((1 << n) - 1) << p);
}

void test(unsigned int x)
{
	int k = 0;
	for (size_t i = x; i > 0; k++)
		i /= 2;
	cout << "x = ";
	for (; k >= 0; k--)
	{
		if (x - pow(2, k) >= 0)
		{
			x -= pow(2, k);
			cout << "1";
		}
		else
			cout << "0";
	}
	cout << endl;
}

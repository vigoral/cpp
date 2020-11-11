#include "stdafx.h"
#include <iostream>

using namespace std;

int C(int, int);

int main()
{
	int n, m;
	cout << "   m\n  C\n   n\n\n";
	cout << "Input n = "; cin >> n;
	cout << "Input m = "; cin >> m;
	cout << "   m\n  C = " << C(m, n) << "\n   n\n";
	system("pause");
	return 0;
}

int C(int m, int n)
{
	if (m == n || m == 0)
		return 1;
	return C(m, n - 1) + C(m - 1, n - 1);
}

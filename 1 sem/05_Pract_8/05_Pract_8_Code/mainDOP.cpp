#include "stdafx.h"
#include <iostream>

using namespace std;

int C(int, int);

int main()
{
	int n, m;
	char tmp;
	cout << "   m\n  C\n   n\n\n";
	cout << "Input n = "; cin >> n;
	cout << "Input m = "; cin >> m;
	cout << "recursion(r), cycle(c)"; cin >> tmp;
	if (tmp == 'r')
		cout << "   m\n  C = " << C(m, n) << "\n   n\n";
	else
	{
		int count = 0;
		int i = n;
		for (; i > m; i--)
			count++;
		i = m;
		int j = n;
		for (; i > -1; i--, j--)
			count++;
		cout << "   m\n  C = " << count << "\n   n\n";
	}
	system("pause");
	return 0;
}

int C(int m, int n)
{
	if (m == n || m == 0)
		return 1;
	return C(m, n - 1) + C(m - 1, n - 1);
}
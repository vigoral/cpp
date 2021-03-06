#include "stdafx.h"
#include "iostream"
#include <cmath>

using namespace std;

bool is_HammingF(const unsigned &k)
{
	if (k < 2)
		return false;
	unsigned test = k;
	for (; !(test % 2);)
		test /= 2;
	for (; !(test % 3);)
		test /= 3;
	for (; !(test % 5);)
		test /= 5;
	return (test == 1);
}
bool is_HammingW(const unsigned &k)
{
	if (k < 2)
		return false;
	unsigned test = k;
	while (!(test % 2))
		test /= 2;
	while (!(test % 3))
		test /= 3;
	while (!(test % 5))
		test /= 5;
	return (test == 1);
}
bool is_HammingDW(const unsigned &k)
{
	if (k < 2)
		return false;
	unsigned test = k;
	if (!(test % 2))
	{
		do
		{
			test /= 2;
		} while (!(test % 2));
	}
	if (!(test % 3))
	{
		do
		{
			test /= 3;
		} while (!(test % 3));
	}
	if (!(test % 5))
	{
		do
		{
			test /= 5;
		} while (!(test % 5));
	}
	return (test == 1);
}


int  main()
{
	int n;
	cin >> n;
	char tmp;
	cout << "FOR(f), WHILE(w), DO-WHILE(d)\n"; cin >> tmp;
	if (tmp == 'f')
		for (size_t i = 1, k = 0; i < n + 1; k++)
		{
			if (is_HammingF(k))
			{
				cout << "Numb #" << i << " = " << k << endl;
				i++;
			}
		}
	else if (tmp == 'w')
	{
		for (size_t i = 1, k = 0; i < n + 1; k++)
			if (is_HammingW(k))
			{
				cout << "Numb #" << i << " = " << k << endl;
				i++;
			}
	}
	else if (tpm == 'd')
	{
		for (size_t i = 1, k = 0; i < n + 1; k++)
		{
			if (is_HammingDW(k))
			{
				cout << "Numb #" << i << " = " << k << endl;
				i++;
			}
		}
	}
	system("pause");
	return 0;
}

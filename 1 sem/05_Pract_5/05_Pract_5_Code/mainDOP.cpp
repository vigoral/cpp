#include "stdafx.h"
#include "iostream"
#include <cmath>

using namespace std;

int main()
{
	int k;
	cout << "Input k (1<k<39) = "; cin >> k;
	cout << "k = ";
	while (k > 0)
	{
		switch (k)
		{
		case 9:
			cout << "IX";
			k -= 9;
			break;
		case 4:
			cout << "IV";
			k -= 4;
			break;
		default:
			if (k >= 10)
			{
				cout << "X";
				k -= 10;
			}
			else if (k >= 5)
			{
				cout << "V";
				k -= 5;
			}
			else if (k >= 1)
			{
				cout << "I";
				k -= 1;
			}
		}
	}
	cout << endl;
	system("pause");
	return 0;
}

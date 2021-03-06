#include "stdafx.h"
#include <iostream>

using namespace std;


bool is_Hamming(const unsigned &k)
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


int  main()
{
	int n;
	cin >> n;
	for (size_t i = 1, k = 0; i < n + 1; k++)
	{
		if (is_Hamming(k))
		{
			cout << "Numb #" << i << " = " << k << endl;
			i++;
		}
	}
	system("pause");
	return 0;
}
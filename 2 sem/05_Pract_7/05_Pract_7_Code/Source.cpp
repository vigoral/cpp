#include "equation.h"

void main()
{
	bool bl = true;
	equation my;
	while (bl)
	{
		try
		{
			cin >> my;
			if (my.get_a() == 0)
				throw Exeption("Error: a = 0");
			else if (my.get_d() < 0)
				throw Exeption("Error: D<0");
			else
				bl = false;
		}
		catch (Exeption error)
		{
			cout << error.get_error() << endl;
			system("pause");
			system("cls");
		}
	}
	cout << "x1 = " << my.res(false) << (my.res(false) == my.res(true) ? " = x2 = " : "\nx2 = ") << my.res(true) << endl;
	system("pause");
}
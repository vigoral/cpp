#include "stdafx.h"
#include "iostream"

using namespace std;

int main()
{
	char f, s;
	cout << "First way (n, s, e, w) = "; cin >> f;
	cout << "Turn  to (u, b, r, l) = "; cin >> s;
	switch (f)
	{
	case 'n':
		switch (s)
		{
		case 'u':
			cout << "New way - north." << endl;
			break;
		case 'b':
			cout << "New way - south." << endl;
			break;
		case 'r':
			cout << "New way - east." << endl;
			break;
		case 'l':
			cout << "New way - west." << endl;
			break;
		default:
			cout << "Incorrect input." << endl;
			break;
		}
		break;
	case 's':
		switch (s)
		{
		case 'u':
			cout << "New way - south." << endl;
			break;
		case 'b':
			cout << "New way - north." << endl;
			break;
		case 'r':
			cout << "New way - west." << endl;
			break;
		case 'l':
			cout << "New way - east." << endl;
			break;
		default:
			cout << "Incorrect input." << endl;
			break;
		}
		break;
	case 'e':
		switch (s)
		{
		case 'u':
			cout << "New way - east." << endl;
			break;
		case 'b':
			cout << "New way - west." << endl;
			break;
		case 'r':
			cout << "New way - south." << endl;
			break;
		case 'l':
			cout << "New way - north." << endl;
			break;
		default:
			cout << "Incorrect input." << endl;
			break;
		}
		break;
	case 'w':
		switch (s)
		{
		case 'u':
			cout << "New way - west." << endl;
			break;
		case 'b':
			cout << "New way - east." << endl;
			break;
		case 'r':
			cout << "New way - north." << endl;
			break;
		case 'l':
			cout << "New way - west." << endl;
			break;
		default:
			cout << "Incorrect input." << endl;
			break;
		}
		break;
	default:
		cout << "Incorrect input." << endl;
		break;
	}
	system("pause");
	return 0;
}

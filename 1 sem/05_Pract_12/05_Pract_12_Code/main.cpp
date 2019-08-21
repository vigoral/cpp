#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

void func();
bool find(char[], int);
bool numb(char);
void erase(char*, int);

int main()
{
	func();
	system("pause");
	return 0;
}

void func()
{
	string strng;
	int len;
	bool tmp = false;
	cout << "Input:" << endl;
	getline(cin, strng);
	for (;;)
	{
		if (strng[0] == '\0')
			break;
		len = 0;
		for (size_t i = 0; i < strng.length(); i++)
		{
			if (strng[i] == ' ')
				break;
			len++;
		}
		if (len == 0)
			break;
		char *str = new char[len];
		int j = 0;
		for (; j<len; j++)
			str[j] = strng[j];
		strng.erase(0, j + 1);
		if (find(str, len))
		{
			tmp = true;
			break;
		}
		delete[]str;
	}
	if (tmp)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

}

bool find(char str[], int len)
{
	if (len == 0)
		return true;
	else if (numb(str[0]))
	{
		erase(str, len);
		return find(str, len - 1);
	}
	else
		return false;
}

bool numb(char a)
{
	if (a > 47 && a < 58)
		return true;
	return false;
}

void erase(char *str, int len)
{
	for (size_t i = 0; i < len; i++)
		if (i + 1 == len)
			str[i] = ' ';
		else
			str[i] = str[i + 1];
}
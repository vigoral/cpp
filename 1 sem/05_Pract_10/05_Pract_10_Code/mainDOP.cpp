#include "stdafx.h"
#include <iostream>
using namespace std;
void func();
void inp(char *);
void move(char *);
void outp(char *);
int main()
{
	func();
	system("pause");
	return 0;
}
void func()
{
	char *arr= new char[10];
	inp(arr);
	move(arr);
	outp(arr);
	delete[]arr;
}
void inp(char *a)
{
	for (size_t i = 0; i < 10; i++)
	{
		cout << "arr[" << i << "] = ";
		cin >> *(a+i);
	}
}
void move(char *a)
{
	char tmp = *a;;
	for (size_t i = 0; i < 9; i++)
		*(a+i) = *(a+i + 1);
	*(a+9) = tmp;
}
void outp(char *a)
{
	for (size_t i = 0; i < 10; i++)
		cout << " arr[" << i << "] = " << *(a+i) << endl;
}

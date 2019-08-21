
#include "stdafx.h"
#include <iostream>
#include <fstream>

using namespace std;

void func();

int main()
{
	func();
	system("pause");
	return 0;
}

void func()
{
	FILE *F, *F1, *F2;
	char name_in[20], name_outp[20], name_outnp[20];
	cout << "Input name of F = "; cin >> name_in;
	cout << "Input name of F1 = "; cin >> name_outp;
	cout << "Input name of F2 = "; cin >> name_outnp;
	fopen_s(&F, name_in, "rb");
	fopen_s(&F1, name_outp, "wb");
	fopen_s(&F2, name_outnp, "wb");
	if (!name_in && !name_outp && !name_outnp)
	{
		cout << "Error. Try again." << endl;
		system("pause");
		exit(0);
	}
	else
	{
		for (;;)
		{
			int a[1];
			fread(a, sizeof(int), 1, F);
			if (a == NULL)
				break;
			if (a[0] % 2 != 0)
				fwrite(a, sizeof(int), 1, F1);
			else
				fwrite(a, sizeof(int), 1, F2);
		}
	}
	if (fclose(F) == -1 || fclose(F1) == -1 || fclose(F2) == -1)
	{
		cout << "Error closing file" << endl;
		system("pause");
		exit(0);
	}
	else
	{
		fclose(F);
		fclose(F1);
		fclose(F2);
	}

}

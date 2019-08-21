#include "stdafx.h"
#include <iostream>

using namespace std;

void func();

struct MyStruct
{
	char date[10];
	int kaycity;
	char namecity[20];
	double time;
	double rate;
	char number[10];
	char numbsub[10];
};

int main()
{
	func();
	system("pause");
	return 0;
}

void func()
{
	MyStruct abc[5];

	abc[0].date = '21.02.2015';
	abc[0].kaycity = 23;
	abc[0].namacity = '1';
	abc[0].time = 20;
	abc[0].rate = 0.5;
	abc[0].number = '0238119111';
	abc[0].numbsub = '02181111111';

	abc[1].date = '21.02.2015';
	abc[1].kaycity = 21;
	abc[1].namacity = '2';
	abc[1].time = 10;
	abc[1].rate = 0.25;
	abc[1].number = '0219115411';
	abc[1].numbsub = '0411611711';

	abc[2].date = '21.02.2015';
	abc[2].kaycity = 23;
	abc[2].namacity = '1';
	abc[2].time = 15;
	abc[2].rate = 0.35;
	abc[2].number = '0231161111';
	abc[2].numbsub = '0241114111';

	abc[3].date = '21.02.2015';
	abc[3].kaycity = 24;
	abc[3].namacity = '3';
	abc[3].time = 18;
	abc[3].rate = 0.4;
	abc[3].number = '0231816111';
	abc[3].numbsub = '0241118111';

	abc[4].date = '21.02.2015';
	abc[4].kaycity = 22;
	abc[4].namacity = '2';
	abc[4].time = 24;
	abc[4].rate = 0.55;
	abc[4].number = '0231171111';
	abc[4].numbsub = '0241119111';

	char name[20];
	double price=0, time=0;
	cout << "Input name city = "; cin > name;
	for (size_t i = 0; i < 5; i++)
	{
		if (abc[i].name == name)
		{
			time += abc[i].time;
			price += (abc[i].rate * abc[i]time);
		}
	}
	cout << "Price = " << price << "\Time = " << time;
}
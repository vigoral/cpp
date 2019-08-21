#include "worker.h"
#include <conio.h>

int main()
{
	worker man = worker("name", 4, "job", 3, 2019, 10000);
	man.print();
	char *name = new char[20];
	char *job = new char[20];
	int year, price;
	cout << "Input new name : "; cin >> name;
	cout << "Input new job : "; cin >> job;
	cout << "Input new year : "; cin >> year;
	cout << "Input new price : "; cin >> price;
	man.set_name(name);
	man.set_job(job);
	man.set_year(year);
	man.set_price(price);
	man.print();
	system("pause");
	return 0;
}

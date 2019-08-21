#include "worcker.h"

int main()
{
	worcker **man = new worcker*[10];
	for (size_t i = 0; i < 10; i++)
	{
		char *name = new char[50];
		char *job = new char[50];
		int year, price;
		cout << "Input name : "; cin >> name;
		cout << "Input job : "; cin >> job;
		cout << "Input year : "; cin >> year;
		cout << "Input price : "; cin >> price;
		man[i] = new worcker(name, job, year, price);
	}
	int price;
	cout << "Input price = "; cin >> price;
	for (size_t i = 0; i < 10; i++)
		if (man[i]->get_price() >= price)
			man[i]->print();
	double experience;
	cout << "Input experience = "; cin >> experience;
	for (size_t i = 0; i < 10; i++)
		if (2019-man[i]->get_year() >= experience)
			man[i]->print();
	char *job = new char[50];
	cout << "Input job = "; cin >> job;
	for (size_t i = 0; i < 10; i++)
		if (man[i]->get_job() == job)
			man[i]->print();
	for (size_t i = 0; i < 10; i++)
		delete man[i];
	delete[]man;
	system("pause");
	return 0;
}

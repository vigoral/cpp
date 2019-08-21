#include "worker.h"

worker::worker(const char * Name, int sizeofname, const char *Job, int sizeofjob, int Year, int Price) :year(Year), price(Price)
{
	name = new char[sizeofname];
	strcpy(name, Name);
	job = new char[sizeofjob];
	strcpy(job, Job);
}
void worker::set_name(const char *a)
{
	if (name != NULL)
		delete[]name;
	name = new char[20];
	strcpy_s(name,20, a);
}
void worker::set_job(const char *a)
{
	if (job != NULL)
		delete[]job;
	job = new char[20];
	strcpy_s(job, 20, a);
}
void worker::set_year(int a)
{
	year = a;
}
void worker::set_price(int a)
{
	price = a;
}
const char * worker::get_name()
{
	return name;
}
const char * worker::get_job()
{
	return job;
}
int worker::get_year()
{
	return year;
}
int worker::get_price()
{
	return price;
}
worker::~worker()
{
	delete[]name;
	delete[]job;
}
void worker::print()
{
	cout << "Name = " << name << "\nJob = " << job << "\nYear = " << year << "\nPrice = " << price << endl;
}

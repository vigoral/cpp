#include "worcker.h"

worcker::worcker(const char * Name, const char *Job, int Year, int Price) :year(Year), price(Price)
{
	name = new char[50];
	strcpy(name, Name);
	job = new char[50];
	strcpy(job, Job);
}
void worcker::set_name(const char *a)
{
	if (name != NULL)
		delete[]name;
	name = new char[20];
	strcpy_s(name, 20, a);
}
void worcker::set_job(const char *a)
{
	if (job != NULL)
		delete[]job;
	job = new char[20];
	strcpy_s(job, 20, a);
}
void worcker::set_year(int a)
{
	year = a;
}
void worcker::set_price(int a)
{
	price = a;
}
const char * worcker::get_name()
{
	return this->name;
}
const char * worcker::get_job()
{
	return this->job;
}
int worcker::get_year()
{
	return this->year;
}
int worcker::get_price()
{
	return this->price;
}
worcker::~worcker()
{
	delete[]name;
	delete[]job;
}
void worcker::print()
{
	cout << "Name = " << name << "\nJob = " << job << "\nYear = " << year << "\nPrice = " << price << endl;
}
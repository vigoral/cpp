#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>

using namespace std;

class worker
{
private:
	char *name;
	char *job;
	int year;
	int price;
public:
	worker(const char *, int, const char *, int, int, int);
	void set_name(const char *);
	void set_job(const char *);
	void set_year(int);
	void set_price(int);
	const char * get_name();
	const char * get_job();
	int get_year();
	int get_price();
	void print();
	~worker();
};

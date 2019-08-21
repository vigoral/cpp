#pragma once

#include <iostream>
#include <string>

using namespace std;

class equation
{
private:
	double a;
	double b; 
	double c;
public:
	equation();
	equation(double, double, double);
	~equation();
	double get_a() const;
	double get_d() const;
	double res(bool) const;
	friend istream& operator >> (istream& cin, equation& obj);
};

class Exeption
{
private:
	string error;
public:
	Exeption(string);
	string get_error() const;
};
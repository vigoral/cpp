#include "equation.h"

equation::equation(){}
equation::equation(double x1, double x2, double x3) :a(x1), b(x2), c(x3) {}
equation::~equation() {}
double equation::get_a() const
{
	return a;
}
double equation::get_d() const
{
	return pow(b, 2) - 4 * a * c;
}
double equation::res(bool bl) const
{
	if (!bl)
		return (-b + sqrt(this->get_d())) / 2 / a;
	else
		return (-b - sqrt(this->get_d())) / 2 / a;
}
istream& operator >> (istream& cin, equation& obj)
{
	double a, b, c;
	cout << "Input a = ";
	cin >> a;
	cout << "Input b = "; 
	cin >> b;
	cout << "Input c = "; 
	cin >> c;
	obj = equation(a, b, c);
	return cin;
}

Exeption::Exeption(string err) :error(err) {}

string Exeption::get_error() const
{
	return error;
}
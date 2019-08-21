#include "parabola.h"

parabola::parabola() : a(1), b(1), c(1) {}

parabola::~parabola() {}

parabola::parabola(double x1, double x2, double x3): a(x1), b(x2), c(x3) {}

parabola::parabola(const parabola& tmp) : a(tmp.a), b(tmp.b), c(tmp.c) {}

void parabola::show() const
{
	cout << "y = ";
	if (a != 0 || b != 0 || c != 0)
	{
		if (a != 0)
			if (a == 1)
				cout << "x^2";
			else
				cout << a << "*x^2";
		if (b != 0)
		{
			if (b == 1)
				if (a != 0)
					cout << "+x";
				else
					cout << "x";
			else if (a == 0)
				cout << b << "*x";
			else
				cout << (b > 0 ? "+" : "") << b << "*x";
		}
		if (c != 0)
			cout << (c > 0 ? "+" : "") << c << endl;
		else
			cout << endl;
	}
	else
		cout << "0" << endl;
}

double parabola::get_a() const
{
	return a;
}

double parabola::get_b() const
{
	return b;
}

double parabola::get_c() const
{
	return c;
}

void parabola::set_a(double x)
{
	a = x;
}

void parabola::set_b(double x)
{
	b = x;
}

void parabola::set_c(double x)
{
	c = x;
}

double parabola::find_maxORmin(double &x)
{
	x = (-b / (2 * a));
	double y = a * pow(x, 2) + b * x + c;
	return y;
}

bool operator || (parabola &one, parabola &two)
{
	double oneX = (-one.get_b() / (2 * one.get_a())), twoX = (-two.get_b() / (2 * two.get_a()));
	double oneY = one.get_a()*pow(oneX, 2) + one.get_b()*oneX + one.get_c(),
		twoY = two.get_a()*pow(twoX, 2) + two.get_b()*twoX + two.get_c();
	if (oneX == twoX && oneY == twoY)
		return true;
	else
		return false;
}

bool operator / (parabola &one, parabola &two)
{
	double newa = (one.get_a() - two.get_a()), newb = (one.get_b() - two.get_b()), newc = (one.get_c() - two.get_c());
	if ((pow(newb, 2) - 4 * newa*newc) < 0)
		return false;
	else
		return true;
}
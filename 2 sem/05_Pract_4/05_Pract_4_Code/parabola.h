#pragma once
#include <iostream>
#include <string>

using namespace std;

class parabola
{
private:
	double a, b, c;
public:
	parabola();
	~parabola();
	parabola(double, double, double);
	parabola(const parabola&);
	void show() const;
	void set_a(double);
	void set_b(double);
	void set_c(double);
	double get_a() const;
	double get_b() const;
	double get_c() const;
	double find_maxORmin(double&);
	friend bool operator || (parabola&, parabola&);
	friend bool operator / (parabola&, parabola&);
};
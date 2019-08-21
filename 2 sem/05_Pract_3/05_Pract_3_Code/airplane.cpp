#include "airplane.h"

airplane::airplane() {};

airplane::airplane(string str, int tmp) :type(str), speed(tmp) {}

airplane::~airplane() {};

void airplane::print() const
{
	cout << "type = " << type << endl;
	cout << "speed = " << speed << endl;
}

void airplane::set_type(string str)
{
	type = str;
}

void airplane::set_speed(int sp)
{
	speed = sp;
}

string airplane::get_type() const
{
	return type;
}

int airplane::get_speed() const
{
	return speed;
}
#pragma once

#include <iostream>
#include <string>
using namespace std;

class airplane
{
protected:
	string type;
	int speed;
public:
	airplane();
	airplane(string, int);
	void set_type(string);
	void set_speed(int);
	string get_type() const;
	int get_speed() const;
	virtual void print() const;
	virtual ~airplane();
};
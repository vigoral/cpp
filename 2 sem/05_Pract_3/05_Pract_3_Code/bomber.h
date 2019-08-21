#pragma once
#include "airplane.h"

class bomber :public airplane
{
private:
	int weight;
public:
	bomber();
	bomber(int, string, int);
	void set_weight(int);
	int get_weight() const;
	virtual void print() const;
	virtual ~bomber();
};
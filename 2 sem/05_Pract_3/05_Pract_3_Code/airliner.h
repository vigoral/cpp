#pragma once
#include"airplane.h"

class airliner :public airplane
{
private:
	int passengers;
public:
	airliner();
	airliner(int, string, int);
	void set_passengers(int);
	int get_passengers() const;
	virtual void print() const;
	virtual ~airliner();
};
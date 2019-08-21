#include "airliner.h"

airliner::airliner() : passengers(0) 
{
	type = "type";
	speed = 0;
}

airliner::airliner(int sp, string str, int ps) : passengers(ps)
{
	speed = sp;
	type = str;
}

void airliner::set_passengers(int tmp)
{
	passengers = tmp;
}

int airliner::get_passengers() const
{
	return passengers;
}

void airliner::print() const
{
	airplane::print();
	cout << "passengers = " << passengers << endl;
}

airliner::~airliner() {}